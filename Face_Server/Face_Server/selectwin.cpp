#include "selectwin.h"
#include "ui_selectwin.h"

SelectWin::SelectWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectWin)
{
    ui->setupUi(this);
    model = new QSqlTableModel();
}

SelectWin::~SelectWin()
{
    delete ui;
}

void SelectWin::on_selelctPB_clicked()
{
    if(ui->personnelRB->isChecked())
    {
        model->setTable("personnel");//设置人员信息表
    }
    if(ui->registerRB->isChecked())
    {
        model->setTable("attendance");//设置登记表
    }
    //这里可以按需设置过滤器
    //可以过滤时间等等，例如限定当天的
    //model->setFilter("time='yyyy-MM-dd hh:mm:ss'");
    //查询
    model->select();

    ui->tableView->setModel(model);
}
