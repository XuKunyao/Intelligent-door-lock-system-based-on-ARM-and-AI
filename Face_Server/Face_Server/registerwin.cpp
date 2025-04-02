#include "registerwin.h"
#include "ui_registerwin.h"
#include <QFileDialog>
#include <qfaceobject.h>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QMessageBox>
#include <QDebug>

RegisterWin::RegisterWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RegisterWin)
{
    ui->setupUi(this);
}

RegisterWin::~RegisterWin()
{
    delete ui;
}

void RegisterWin::timerEvent(QTimerEvent *e)
{
    //获取摄像头数据并且显示在界面上
    if(cap.isOpened())
    {
        cap>>image;
        if(image.data == nullptr) return;
    }
    //Mat--->QImage
    cv::Mat rgbImage;
    cv::cvtColor(image,rgbImage,cv::COLOR_BGR2RGB);
    QImage qImg(rgbImage.data, rgbImage.cols, rgbImage.rows,rgbImage.step1(), QImage::Format_RGB888);
    //在qt界面上显示
    QPixmap mmp=QPixmap::fromImage(qImg);
    mmp = mmp.scaledToWidth(ui->headfile->width());
    ui->headfile->setPixmap(mmp);
}

// 重置按钮
void RegisterWin::on_reset_clicked()
{
    //清空数据
    ui->name->clear();
    ui->birthday->setDate(QDate::currentDate());
    ui->addr->clear();
    ui->number->clear();
    ui->picfile->clear();
}

// 添加头像按钮
void RegisterWin::on_addpic_clicked()
{
    //通过文件对话框 选中图片路径
    QString filepath = QFileDialog::getOpenFileName(this);
    ui->picfile->setText(filepath);

    //显示图片
    QPixmap mmp(filepath);
    mmp = mmp.scaledToWidth(ui->headfile->width());
    ui->headfile->setPixmap(mmp);
}

// 注册按钮
void RegisterWin::on_Register_clicked()
{
    /******************** 步骤1：人脸注册 ​********************/
    QFaceObject  faceobj; // 创建人脸识别对象
    // 从图片路径读取OpenCV格式图像
    cv::Mat image = cv::imread(ui->picfile->text().toUtf8().data());
    // 调用人脸注册接口获取faceID
    int faceID = faceobj.face_register(image);
    qDebug()<<faceID;

    /* 保存头像到本地文件 */
    // 生成加密文件名：将姓名转为Base64字符串，避免中文路径问题
    // ​%1：字符串中的占位符，表示第一个参数的位置
    // ​.arg(value)：将占位符替换为实际值
    QString headfile = QString("./data/%1.jpg").arg(QString(ui->name->text().toUtf8().toBase64()));
    cv::imwrite(headfile.toUtf8().data(), image);

    /******************** 步骤2：数据库操作 ​********************/
    QSqlTableModel model; // 创建表格模型
    model.setTable("personnel");// 设置操作表
    QSqlRecord record = model.record(); // 创建新记录

    // 设置各字段值
    record.setValue("name",ui->name->text());
    record.setValue("sex",ui->msex->isChecked()?"男":"女");
    record.setValue("birthday", ui->birthday->text());
    record.setValue("address",ui->addr->text());
    record.setValue("phone",ui->number->text());
    record.setValue("faceID", faceID);
    //头像路径
    record.setValue("headfile",headfile);
    // 插入记录到模型（第0行前插入）
    bool ret = model.insertRecord(0,record);
    /******************** 步骤3：处理结果 ​********************/
    if(ret)
    {
        // 提交事务到数据库
        QMessageBox::information(this,"注册提示","注册成功");
        //提交
        model.submitAll();
    }else
    {
        QMessageBox::information(this,"注册提示","注册失败");
    }
}

// 打开摄像头按钮
void RegisterWin::on_camera_clicked()
{
    if(ui->camera->text() == "打开摄像头")
    {
        //打开摄像头
        if(cap.open(1))
        {
            ui->camera->setText("关闭摄像头");
            //启动定时器事件
            timerid = startTimer(100);
        }
    }else
    {

        killTimer(timerid);//关闭定时器事件
        ui->camera->setText("打开摄像头");
        //关闭摄像头
        cap.release();
    }
}

// 拍照按钮
void RegisterWin::on_takephoto_clicked()
{
    //保存数据
    //把头像保存到一个固定路径下
    QString headfileaddr = QString("./data/%1.jpg").arg(QString(ui->name->text().toUtf8().toBase64()));
    ui->picfile->setText(headfileaddr);
    cv::imwrite(headfileaddr.toUtf8().data(), image);
    killTimer(timerid);//关闭定时器事件
    ui->camera->setText("打开摄像头");
    //关闭摄像头
    cap.release();
}
