#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include"gamepanel.h"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void on_pushButton_clicked();//选择单人

    void on_pushButton_2_clicked();//选择人机

    void on_pushButton_3_clicked();//返回

private:
    Ui::Dialog *ui;
   GamePanel *gamepanel;//游戏界面
};

#endif // DIALOG_H
