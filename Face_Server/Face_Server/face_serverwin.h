#ifndef FACE_SERVERWIN_H
#define FACE_SERVERWIN_H

#include "qfaceobject.h"

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QSqlTableModel>
#include <QSqlRecord>

QT_BEGIN_NAMESPACE
namespace Ui { class Face_ServerWin; }
QT_END_NAMESPACE

class Face_ServerWin : public QMainWindow
{
    Q_OBJECT

public:
    Face_ServerWin(QWidget *parent = nullptr);
    ~Face_ServerWin();
signals:
    void query(cv::Mat& image);
protected slots:
    void accept_client();
    void read_data();
    void recv_faceid(int64_t faceid);

private:
    Ui::Face_ServerWin *ui;
    QTcpServer mserver;
    QTcpSocket *msocket;
    quint64 bsize;

    QFaceObject fobj;
    QSqlTableModel model;
};
#endif // FACE_SERVERWIN_H
