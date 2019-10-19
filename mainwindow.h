#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"dialog.h"
#include"dialog1.h"
#include"dialog2.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    int difficulty;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();//开始游戏

    void on_pushButton_2_clicked();//选项

    void on_pushButton_3_clicked();//退出

private:
    Ui::MainWindow *ui;
    Dialog *dialog;
    Dialog1 *dialog1;
    Dialog2 *dialog2;
};

#endif // MAINWINDOW_H
