/********************************************************************************
** Form generated from reading UI file 'face_doorlock.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACE_DOORLOCK_H
#define UI_FACE_DOORLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Face_DoorLock
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *renzhenglb;
    QLabel *label;
    QLabel *label_2;
    QLabel *head_2;
    QLabel *video;
    QWidget *widget_3;
    QLabel *title;
    QLabel *head;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QLineEdit *personnelEdit;
    QWidget *widget_5;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *nameEdit;
    QWidget *widget_6;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *departmentEdit;
    QWidget *widget_7;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *timeEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Face_DoorLock)
    {
        if (Face_DoorLock->objectName().isEmpty())
            Face_DoorLock->setObjectName(QString::fromUtf8("Face_DoorLock"));
        Face_DoorLock->resize(800, 480);
        centralwidget = new QWidget(Face_DoorLock);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 480, 480));
        widget->setStyleSheet(QString::fromUtf8(""));
        renzhenglb = new QWidget(widget);
        renzhenglb->setObjectName(QString::fromUtf8("renzhenglb"));
        renzhenglb->setGeometry(QRect(170, 340, 171, 51));
        renzhenglb->setStyleSheet(QString::fromUtf8("background-color: rgba(49, 50, 54, 70);\n"
"border-radius:10px;"));
        label = new QLabel(renzhenglb);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(22, 14, 29, 21));
        label->setMaximumSize(QSize(31, 21));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/yes.png);\n"
"background-color: rgba(255, 255, 255, 0);"));
        label_2 = new QLabel(renzhenglb);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(57, 11, 84, 28));
        label_2->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:none;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 0);"));
        head_2 = new QLabel(widget);
        head_2->setObjectName(QString::fromUtf8("head_2"));
        head_2->setGeometry(QRect(170, 50, 160, 160));
        head_2->setStyleSheet(QString::fromUtf8("border-image: url(:/crc.png);"));
        head_2->setAlignment(Qt::AlignCenter);
        video = new QLabel(widget);
        video->setObjectName(QString::fromUtf8("video"));
        video->setGeometry(QRect(0, 0, 480, 480));
        video->raise();
        renzhenglb->raise();
        head_2->raise();
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(480, 0, 320, 480));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:1px solid #313236;\n"
"	border-radius:4px;\n"
"	background-color: rgb(37, 40, 49, 0.9);\n"
"}"));
        title = new QLabel(widget_3);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(0, 0, 320, 40));
        title->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));
        title->setAlignment(Qt::AlignCenter);
        head = new QLabel(widget_3);
        head->setObjectName(QString::fromUtf8("head"));
        head->setGeometry(QRect(90, 60, 130, 130));
        head->setStyleSheet(QString::fromUtf8("QWidget#head{\n"
"        border-radius:65px;\n"
"}"));
        head->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(widget_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 210, 301, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(layoutWidget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	border:none;\n"
"}"));
        layoutWidget1 = new QWidget(widget_4);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 10, 271, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(197, 197, 197);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_6);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        personnelEdit = new QLineEdit(layoutWidget1);
        personnelEdit->setObjectName(QString::fromUtf8("personnelEdit"));
        personnelEdit->setEnabled(false);
        personnelEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(personnelEdit);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(layoutWidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	border:none;\n"
"}"));
        layoutWidget_2 = new QWidget(widget_5);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 10, 271, 25));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(197, 197, 197);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(label_8);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        nameEdit = new QLineEdit(layoutWidget_2);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setEnabled(false);
        nameEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(nameEdit);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(layoutWidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	border:none;\n"
"}"));
        layoutWidget_3 = new QWidget(widget_6);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 10, 271, 25));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(197, 197, 197);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_5->addWidget(label_9);

        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        departmentEdit = new QLineEdit(layoutWidget_3);
        departmentEdit->setObjectName(QString::fromUtf8("departmentEdit"));
        departmentEdit->setEnabled(false);
        departmentEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(departmentEdit);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(layoutWidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"	border:none;\n"
"}"));
        layoutWidget_4 = new QWidget(widget_7);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 10, 271, 25));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(197, 197, 197);\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_6->addWidget(label_10);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        timeEdit = new QLineEdit(layoutWidget_4);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setEnabled(false);
        timeEdit->setStyleSheet(QString::fromUtf8("border:none;\n"
"font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(timeEdit);


        verticalLayout->addWidget(widget_7);

        Face_DoorLock->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Face_DoorLock);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        Face_DoorLock->setMenuBar(menubar);
        statusbar = new QStatusBar(Face_DoorLock);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Face_DoorLock->setStatusBar(statusbar);

        retranslateUi(Face_DoorLock);

        QMetaObject::connectSlotsByName(Face_DoorLock);
    } // setupUi

    void retranslateUi(QMainWindow *Face_DoorLock)
    {
        Face_DoorLock->setWindowTitle(QCoreApplication::translate("Face_DoorLock", "Face_DoorLock", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("Face_DoorLock", "\350\256\244\350\257\201\346\210\220\345\212\237", nullptr));
        head_2->setText(QString());
        video->setText(QString());
        title->setText(QCoreApplication::translate("Face_DoorLock", "\344\272\272\350\204\270\350\257\206\345\210\253\346\231\272\350\203\275\351\227\250\351\224\201", nullptr));
        head->setText(QString());
        label_6->setText(QCoreApplication::translate("Face_DoorLock", "\344\272\272\345\221\230\347\274\226\345\217\267", nullptr));
        personnelEdit->setText(QCoreApplication::translate("Face_DoorLock", "001", nullptr));
        label_8->setText(QCoreApplication::translate("Face_DoorLock", "\345\247\223      \345\220\215", nullptr));
        nameEdit->setText(QCoreApplication::translate("Face_DoorLock", "001", nullptr));
        label_9->setText(QCoreApplication::translate("Face_DoorLock", "\351\203\250      \351\227\250", nullptr));
        departmentEdit->setText(QCoreApplication::translate("Face_DoorLock", "001", nullptr));
        label_10->setText(QCoreApplication::translate("Face_DoorLock", "\347\231\273\350\256\260\346\227\266\351\227\264", nullptr));
        timeEdit->setText(QCoreApplication::translate("Face_DoorLock", "001", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Face_DoorLock: public Ui_Face_DoorLock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACE_DOORLOCK_H
