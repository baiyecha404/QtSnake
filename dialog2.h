#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>

namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT
public:
    int currentscore;//当前分数
public:
    explicit Dialog2(QString str,int currentscore, QWidget *parent = 0);
    ~Dialog2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog2 *ui;
};

#endif // DIALOG2_H
