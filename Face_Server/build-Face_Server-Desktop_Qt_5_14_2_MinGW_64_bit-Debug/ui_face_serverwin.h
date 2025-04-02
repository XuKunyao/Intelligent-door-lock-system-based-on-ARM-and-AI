/********************************************************************************
** Form generated from reading UI file 'face_serverwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACE_SERVERWIN_H
#define UI_FACE_SERVERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <selectwin.h>
#include "registerwin.h"

QT_BEGIN_NAMESPACE

class Ui_Face_ServerWin
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *picture;
    RegisterWin *registerWidget;
    SelectWin *infoWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Face_ServerWin)
    {
        if (Face_ServerWin->objectName().isEmpty())
            Face_ServerWin->setObjectName(QString::fromUtf8("Face_ServerWin"));
        Face_ServerWin->resize(798, 541);
        centralwidget = new QWidget(Face_ServerWin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 781, 481));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        picture = new QLabel(tab);
        picture->setObjectName(QString::fromUtf8("picture"));
        picture->setGeometry(QRect(9, 9, 411, 431));
        picture->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        tabWidget->addTab(tab, QString());
        registerWidget = new RegisterWin();
        registerWidget->setObjectName(QString::fromUtf8("registerWidget"));
        tabWidget->addTab(registerWidget, QString());
        infoWidget = new SelectWin();
        infoWidget->setObjectName(QString::fromUtf8("infoWidget"));
        tabWidget->addTab(infoWidget, QString());
        Face_ServerWin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Face_ServerWin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 798, 23));
        Face_ServerWin->setMenuBar(menubar);
        statusbar = new QStatusBar(Face_ServerWin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Face_ServerWin->setStatusBar(statusbar);

        retranslateUi(Face_ServerWin);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Face_ServerWin);
    } // setupUi

    void retranslateUi(QMainWindow *Face_ServerWin)
    {
        Face_ServerWin->setWindowTitle(QCoreApplication::translate("Face_ServerWin", "Face_ServerWin", nullptr));
        picture->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Face_ServerWin", " \344\272\272\345\221\230\345\233\276\345\203\217\351\207\207\351\233\206", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(registerWidget), QCoreApplication::translate("Face_ServerWin", " \346\263\250\345\206\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(infoWidget), QCoreApplication::translate("Face_ServerWin", " \346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Face_ServerWin: public Ui_Face_ServerWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACE_SERVERWIN_H
