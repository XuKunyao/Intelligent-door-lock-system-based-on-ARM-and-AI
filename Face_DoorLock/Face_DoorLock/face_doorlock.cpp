#include "face_doorlock.h"
#include "ui_face_doorlock.h"
#include <QImage>
#include <QPainter>
#include <QDebug>
#include <QJsonParseError>
#include <qjsondocument.h>
#include <QJsonObject>

Face_DoorLock::Face_DoorLock(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Face_DoorLock)
{
    ui->setupUi(this);
    //打开摄像头
    cap.open(1);//dev/video
    //启动定时器事件
    startTimer(50);
    //导入级联分类器文件
    cascade.load("E:/Program/Linux/Linux_Projects/ARM-DoorLock-Project/OpenCV_install/etc/haarcascades/haarcascade_frontalface_alt2.xml");

    //QTcpSocket当断开连接的时候disconnected信号，连接成功会发送connected
    connect(&msocket,&QTcpSocket::disconnected,this, &Face_DoorLock::start_connect);
    connect(&msocket,&QTcpSocket::connected,this, &Face_DoorLock::stop_connect);

    //关联接收数据的槽函数
    connect(&msocket,&QTcpSocket::readyRead,this,&Face_DoorLock::recv_data);

    //定时器连接服务器
    connect(&mtimer, &QTimer::timeout,this,&Face_DoorLock::timer_connect);
    //启动定时器
    mtimer.start(5000);//每5s钟连接一次，直到连接成功就不在连接

    flag =0;

    //刚开始的时候隐藏“认证成功”标签
    ui->renzhenglb->hide();
}

Face_DoorLock::~Face_DoorLock()
{
    delete ui;
}

void Face_DoorLock::timerEvent(QTimerEvent *e)
{
    //采集数据
    Mat srcImage;
    if(cap.grab())
    {
        cap.read(srcImage);//读取一帧数据
    }
    //把图片大小设置为与窗口一样的大小
    cv::resize(srcImage,srcImage,Size(480,480));

    Mat grayImage;
    //转灰度图
    cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
    //检测人脸数据
    std::vector<Rect> faceRects;
    cascade.detectMultiScale(grayImage,faceRects);
    if(faceRects.size()>0 && flag>=0)
    {
        Rect rect = faceRects.at(0);//第一个人脸的矩形框
        //rectangle(srcImage,rect,Scalar(0,0,255));

        //移动人脸框（图片--QLabel）
        ui->head_2->move(rect.x,rect.y);

        if(flag > 2){
            //把Mat数据转化为QbyteArray， -->编码成jpg格式
            std::vector<uchar> buf;
            cv::imencode(".jpg",srcImage,buf);
            QByteArray byte((const char*)buf.data(),buf.size());
            //准备发送
            quint64 backsize = byte.size();
            QByteArray sendData;
            QDataStream stream(&sendData,QIODevice::WriteOnly);
            stream.setVersion(QDataStream::Qt_5_14);
            stream<<backsize<<byte;
            //发送
            msocket.write(sendData);
            flag = -2;

            //保存人脸数据
            faceMat = srcImage(rect);
            //写入./face.jpg文件
            imwrite("./face.jpg",faceMat);
        }
        flag++;

    }else
    {
        //把人脸框移动到中心位置
        ui->head_2->move(160,120);
        flag=0;
        ui->renzhenglb->hide();
    }

    if(srcImage.data == nullptr)return;
    //把opencv里面的Mat格式数据(BGR)转Qt里面的QImage(RGB)
    cvtColor(srcImage,srcImage,COLOR_BGR2RGB);
    QImage image(srcImage.data,srcImage.cols,srcImage.rows,srcImage.step1(),QImage::Format_RGB888);
    QPixmap mmp = QPixmap::fromImage(image);
    ui->video->setPixmap(mmp);
}

void Face_DoorLock::timer_connect()
{
    //连接服务器
    msocket.connectToHost("192.168.3.3",9999);
    qDebug()<<"正在连接服务器";
}

void Face_DoorLock::recv_data()
{
    // QString msg = msocket.readAll();
    // qDebug()<<msg;
    // ui->nameEdit->setText(msg);

    //{employeeID:%1,name:%2,department:软件,time:%3}
    QByteArray array = msocket.readAll();
    qDebug()<<array;
    //Json解析
    QJsonParseError err;
    QJsonDocument doc = QJsonDocument::fromJson(array,&err);
    if(err.error != QJsonParseError::NoError)
    {
        qDebug()<<"json数据错误";
        return;
    }

    QJsonObject obj = doc.object();
    QString personnelID = obj.value("personnelID").toString();
    QString name = obj.value("name").toString();
    QString department = obj.value("department").toString();
    QString timestr = obj.value("time").toString();

    ui->personnelEdit->setText(personnelID);
    ui->nameEdit->setText(name);
    ui->departmentEdit->setText(department);
    ui->timeEdit->setText(timestr);

    //读取对应的图片文件，通过样式来显示图片
    ui->head->setStyleSheet("border-radius:75px;border-image: url(./face.jpg);");
    ui->renzhenglb->show();
}

void Face_DoorLock::stop_connect()
{
    mtimer.stop();
    qDebug()<<"成功连接服务器";
}

void Face_DoorLock::start_connect()
{
    mtimer.start(5000);//启动定时器
    qDebug()<<"断开连接";
}

