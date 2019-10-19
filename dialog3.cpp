#include "dialog3.h"
#include "ui_dialog3.h"

int i;
Dialog3::Dialog3(int score,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    i=score;
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_clicked()//确认按钮，将用户输入名字读到fame中
{
    QString str;
    str=ui->lineEdit->text();
    this->close();
    dialog2=new Dialog2(str,i, this);
    dialog2->show();
}
