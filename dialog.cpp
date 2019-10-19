#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()//单人
{
    gamepanel=new GamePanel(1,this);//此处记得区分难度
    gamepanel->show();
    this->close();
}

void Dialog::on_pushButton_2_clicked()//人机
{
    gamepanel=new GamePanel(2,this);
    gamepanel->show();
    this->close();
}

void Dialog::on_pushButton_3_clicked()//返回
{
    this->close();
}
