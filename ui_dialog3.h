/********************************************************************************
** Form generated from reading UI file 'dialog3.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG3_H
#define UI_DIALOG3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog3
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *Dialog3)
    {
        if (Dialog3->objectName().isEmpty())
            Dialog3->setObjectName(QStringLiteral("Dialog3"));
        Dialog3->resize(200, 175);
        label = new QLabel(Dialog3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 151, 41));
        pushButton = new QPushButton(Dialog3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 130, 75, 23));
        lineEdit = new QLineEdit(Dialog3);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 70, 151, 31));

        retranslateUi(Dialog3);

        QMetaObject::connectSlotsByName(Dialog3);
    } // setupUi

    void retranslateUi(QDialog *Dialog3)
    {
        Dialog3->setWindowTitle(QApplication::translate("Dialog3", "Enter your nickname", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog3", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\346\230\265\347\247\260\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog3", "\347\241\256\345\256\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog3: public Ui_Dialog3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG3_H
