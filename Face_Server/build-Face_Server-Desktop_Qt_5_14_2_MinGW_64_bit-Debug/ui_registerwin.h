/********************************************************************************
** Form generated from reading UI file 'registerwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWIN_H
#define UI_REGISTERWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RegisterWin
{
public:
    QLabel *headfile;
    QLineEdit *picfile;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *name;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QRadioButton *msex;
    QRadioButton *wsex;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QDateTimeEdit *birthday;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *addr;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *number;
    QSplitter *splitter_2;
    QPushButton *Register;
    QPushButton *reset;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *addpic;
    QPushButton *takephoto;
    QPushButton *camera;

    void setupUi(QWidget *RegisterWin)
    {
        if (RegisterWin->objectName().isEmpty())
            RegisterWin->setObjectName(QString::fromUtf8("RegisterWin"));
        RegisterWin->resize(681, 387);
        headfile = new QLabel(RegisterWin);
        headfile->setObjectName(QString::fromUtf8("headfile"));
        headfile->setGeometry(QRect(370, 10, 293, 271));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(headfile->sizePolicy().hasHeightForWidth());
        headfile->setSizePolicy(sizePolicy);
        headfile->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        picfile = new QLineEdit(RegisterWin);
        picfile->setObjectName(QString::fromUtf8("picfile"));
        picfile->setGeometry(QRect(370, 290, 291, 31));
        sizePolicy.setHeightForWidth(picfile->sizePolicy().hasHeightForWidth());
        picfile->setSizePolicy(sizePolicy);
        splitter = new QSplitter(RegisterWin);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 11, 344, 361));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        name = new QLineEdit(layoutWidget);
        name->setObjectName(QString::fromUtf8("name"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name->sizePolicy().hasHeightForWidth());
        name->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(18);
        name->setFont(font);

        horizontalLayout->addWidget(name);

        splitter->addWidget(layoutWidget);
        layoutWidget_3 = new QWidget(splitter);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        msex = new QRadioButton(layoutWidget_3);
        msex->setObjectName(QString::fromUtf8("msex"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(msex->sizePolicy().hasHeightForWidth());
        msex->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setPointSize(10);
        msex->setFont(font1);

        horizontalLayout_6->addWidget(msex);

        wsex = new QRadioButton(layoutWidget_3);
        wsex->setObjectName(QString::fromUtf8("wsex"));
        sizePolicy2.setHeightForWidth(wsex->sizePolicy().hasHeightForWidth());
        wsex->setSizePolicy(sizePolicy2);
        wsex->setFont(font1);

        horizontalLayout_6->addWidget(wsex);

        splitter->addWidget(layoutWidget_3);
        layoutWidget_4 = new QWidget(splitter);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        birthday = new QDateTimeEdit(layoutWidget_4);
        birthday->setObjectName(QString::fromUtf8("birthday"));
        sizePolicy1.setHeightForWidth(birthday->sizePolicy().hasHeightForWidth());
        birthday->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(birthday);

        splitter->addWidget(layoutWidget_4);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        addr = new QLineEdit(layoutWidget1);
        addr->setObjectName(QString::fromUtf8("addr"));
        sizePolicy1.setHeightForWidth(addr->sizePolicy().hasHeightForWidth());
        addr->setSizePolicy(sizePolicy1);
        addr->setFont(font);

        horizontalLayout_2->addWidget(addr);

        splitter->addWidget(layoutWidget1);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        number = new QLineEdit(layoutWidget_2);
        number->setObjectName(QString::fromUtf8("number"));
        sizePolicy1.setHeightForWidth(number->sizePolicy().hasHeightForWidth());
        number->setSizePolicy(sizePolicy1);
        number->setFont(font);

        horizontalLayout_3->addWidget(number);

        splitter->addWidget(layoutWidget_2);
        splitter_2 = new QSplitter(splitter);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        Register = new QPushButton(splitter_2);
        Register->setObjectName(QString::fromUtf8("Register"));
        splitter_2->addWidget(Register);
        reset = new QPushButton(splitter_2);
        reset->setObjectName(QString::fromUtf8("reset"));
        splitter_2->addWidget(reset);
        splitter->addWidget(splitter_2);
        layoutWidget2 = new QWidget(RegisterWin);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(370, 330, 293, 41));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        addpic = new QPushButton(layoutWidget2);
        addpic->setObjectName(QString::fromUtf8("addpic"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(addpic->sizePolicy().hasHeightForWidth());
        addpic->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(addpic);

        takephoto = new QPushButton(layoutWidget2);
        takephoto->setObjectName(QString::fromUtf8("takephoto"));
        sizePolicy3.setHeightForWidth(takephoto->sizePolicy().hasHeightForWidth());
        takephoto->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(takephoto);

        camera = new QPushButton(layoutWidget2);
        camera->setObjectName(QString::fromUtf8("camera"));
        sizePolicy3.setHeightForWidth(camera->sizePolicy().hasHeightForWidth());
        camera->setSizePolicy(sizePolicy3);

        horizontalLayout_8->addWidget(camera);


        retranslateUi(RegisterWin);

        QMetaObject::connectSlotsByName(RegisterWin);
    } // setupUi

    void retranslateUi(QWidget *RegisterWin)
    {
        RegisterWin->setWindowTitle(QCoreApplication::translate("RegisterWin", "Form", nullptr));
        headfile->setText(QString());
        label->setText(QCoreApplication::translate("RegisterWin", "\345\247\223\345\220\215\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("RegisterWin", "\346\200\247\345\210\253\357\274\232", nullptr));
        msex->setText(QCoreApplication::translate("RegisterWin", "\347\224\267", nullptr));
        wsex->setText(QCoreApplication::translate("RegisterWin", "\345\245\263", nullptr));
        label_7->setText(QCoreApplication::translate("RegisterWin", "\347\224\237\346\227\245\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("RegisterWin", "\345\234\260\345\235\200\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("RegisterWin", "\347\224\265\350\257\235\357\274\232", nullptr));
        Register->setText(QCoreApplication::translate("RegisterWin", "\346\263\250\345\206\214", nullptr));
        reset->setText(QCoreApplication::translate("RegisterWin", "\351\207\215\347\275\256", nullptr));
        addpic->setText(QCoreApplication::translate("RegisterWin", "\346\267\273\345\212\240\345\244\264\345\203\217", nullptr));
        takephoto->setText(QCoreApplication::translate("RegisterWin", "\346\213\215\347\205\247", nullptr));
        camera->setText(QCoreApplication::translate("RegisterWin", "\346\211\223\345\274\200\346\221\204\345\203\217\345\244\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWin: public Ui_RegisterWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWIN_H
