#ifndef DIALOG3_H
#define DIALOG3_H

#include <QDialog>
#include <dialog2.h>

namespace Ui {
class Dialog3;
}

class Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3(int score,QWidget *parent = 0);
    ~Dialog3();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog3 *ui;

    Dialog2 * dialog2;
};

#endif // DIALOG3_H
