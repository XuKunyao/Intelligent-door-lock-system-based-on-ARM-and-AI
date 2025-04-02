/********************************************************************************
** Form generated from reading UI file 'selectwin.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTWIN_H
#define UI_SELECTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelectWin
{
public:
    QTableView *tableView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *personnelRB;
    QRadioButton *registerRB;
    QPushButton *selelctPB;

    void setupUi(QWidget *SelectWin)
    {
        if (SelectWin->objectName().isEmpty())
            SelectWin->setObjectName(QString::fromUtf8("SelectWin"));
        SelectWin->resize(640, 363);
        tableView = new QTableView(SelectWin);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 60, 611, 291));
        layoutWidget = new QWidget(SelectWin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 601, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        personnelRB = new QRadioButton(layoutWidget);
        personnelRB->setObjectName(QString::fromUtf8("personnelRB"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(personnelRB->sizePolicy().hasHeightForWidth());
        personnelRB->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        personnelRB->setFont(font);

        horizontalLayout->addWidget(personnelRB);

        registerRB = new QRadioButton(layoutWidget);
        registerRB->setObjectName(QString::fromUtf8("registerRB"));
        sizePolicy.setHeightForWidth(registerRB->sizePolicy().hasHeightForWidth());
        registerRB->setSizePolicy(sizePolicy);
        registerRB->setFont(font);

        horizontalLayout->addWidget(registerRB);

        selelctPB = new QPushButton(layoutWidget);
        selelctPB->setObjectName(QString::fromUtf8("selelctPB"));
        sizePolicy.setHeightForWidth(selelctPB->sizePolicy().hasHeightForWidth());
        selelctPB->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(selelctPB);


        retranslateUi(SelectWin);

        QMetaObject::connectSlotsByName(SelectWin);
    } // setupUi

    void retranslateUi(QWidget *SelectWin)
    {
        SelectWin->setWindowTitle(QCoreApplication::translate("SelectWin", "Form", nullptr));
        personnelRB->setText(QCoreApplication::translate("SelectWin", "\344\272\272\345\221\230\344\277\241\346\201\257", nullptr));
        registerRB->setText(QCoreApplication::translate("SelectWin", "\347\231\273\350\256\260\344\277\241\346\201\257", nullptr));
        selelctPB->setText(QCoreApplication::translate("SelectWin", "\346\237\245\350\257\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelectWin: public Ui_SelectWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTWIN_H
