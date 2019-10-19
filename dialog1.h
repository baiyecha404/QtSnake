#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>
#include<QSpinBox>
#include"gamepanel.h"
namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();

private slots:

    void on_pushButton_2_clicked();//返回主界面

public:
    //调节难度组件
    QSpinBox* box;

private:
    Ui::Dialog1 *ui;


};

#endif // DIALOG1_H
