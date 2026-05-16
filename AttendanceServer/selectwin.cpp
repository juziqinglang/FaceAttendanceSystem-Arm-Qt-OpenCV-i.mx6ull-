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

void SelectWin::on_selectBT_clicked()
{
    if(ui->employeeRb->isChecked())
    {
        model->setTable("employee"); //设置员工表格
    }
    if(ui->attendanceRb->isChecked())
    {
        model->setTable("attendance"); //设置员工表格
    }

    //设置过滤器
//    model->setFilter("name='lucy'");
    //查询
    model->select();
    ui->tableView->setModel(model);
}
