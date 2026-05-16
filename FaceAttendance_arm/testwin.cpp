#include "testwin.h"
#include "ui_testwin.h"

TestWin::TestWin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TestWin)
{
    ui->setupUi(this);

    ui->pushButton->setText("我是一个按钮");
}

TestWin::~TestWin()
{
    delete ui;
}
