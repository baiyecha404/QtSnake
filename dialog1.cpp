#include "dialog1.h"
#include "ui_dialog1.h"

extern int difficulty;
Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);
    ui->spinBox->setValue(difficulty);//设置难度
}

Dialog1::~Dialog1()
{
    delete ui;
}


void Dialog1::on_pushButton_2_clicked()//返回主窗口
{
    difficulty=ui->spinBox->value();
    this->close();
}


