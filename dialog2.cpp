#include "dialog2.h"
#include "ui_dialog2.h"
#include<windows.h>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<iostream>


//高分榜结构体
//成员 分数
struct Fame{
char s[20];
int highscore;
};
typedef struct Fame Fame;
Fame fame[7] ;

//用于结构体排序
bool cmp(Fame x,Fame y){
    return x.highscore>y.highscore;
}


Dialog2::Dialog2(QString str, int currentscore,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    FILE* fp;
//只读模式读取名人堂文件
    fp=fopen("Hall of Fame.txt","r");
    int i=0;
    while(fscanf(fp,"%s%d",fame[i].s,&fame[i].highscore)!=EOF){
        i++;
    }
    int score=currentscore;
    fame[i].highscore=score,fame[i].s[0]='H',fame[i].s[1]='E';
    /*下面此处是为了将QString转为char*
    */
    QByteArray ba;
    char * ptr;
    ba = str.toLatin1();
    ptr=ba.data();
    memcpy(fame[i].s,ptr,20);
    std::sort(fame,fame+i+1,cmp);//结构体排序，分数降序
    fclose(fp);
    //只写模式，准备写入新数据
    fp=fopen("Hall of Fame.txt","w");
    int m=i;
    /*
    在五个标签中输出排名及分数
    */
    if (m>=4) m=4;
    switch(m)
    {
        case(4):fprintf(fp,"\n%s  %d",fame[4].s,fame[4].highscore);
                ui->label_6->setText(QString::fromStdString(fame[4].s));
                ui->label_11->setText(QString::number(fame[4].highscore));
        case(3):fprintf(fp,"\n%s  %d",fame[3].s,fame[3].highscore);
                ui->label_5->setText(QString::fromStdString(fame[3].s));
                ui->label_10->setText(QString::number(fame[3].highscore));
        case(2):fprintf(fp,"\n%s  %d",fame[2].s,fame[2].highscore);
                ui->label_4->setText(QString::fromStdString(fame[2].s));
                ui->label_9->setText(QString::number(fame[2].highscore));
        case(1):fprintf(fp,"\n%s  %d",fame[1].s,fame[1].highscore);
                ui->label_3->setText(QString::fromStdString(fame[1].s));
                ui->label_8->setText(QString::number(fame[1].highscore));
        case(0):fprintf(fp,"\n%s  %d",fame[0].s,fame[0].highscore);
                ui->label_2->setText(QString::fromStdString(fame[0].s));
                ui->label_7->setText(QString::number(fame[0].highscore));
    }
    fclose(fp);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_clicked()//确认，退出名人堂界面
{
    this->close();
}
