#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include<windows.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//进入模式选择界面
void MainWindow::on_pushButton_clicked()
{
    dialog=new Dialog(this);
    dialog->show();
}

//进入难度选择模式
void MainWindow::on_pushButton_2_clicked()
{
    dialog1=new Dialog1(this);
    dialog1->show();
}
//退出程序
void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}
