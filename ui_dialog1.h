/********************************************************************************
** Form generated from reading UI file 'dialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG1_H
#define UI_DIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog1
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QSpinBox *spinBox;
    QLabel *label_3;

    void setupUi(QDialog *Dialog1)
    {
        if (Dialog1->objectName().isEmpty())
            Dialog1->setObjectName(QStringLiteral("Dialog1"));
        Dialog1->resize(800, 600);
        label = new QLabel(Dialog1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 10, 261, 131));
        label->setMinimumSize(QSize(40, 40));
        label->setStyleSheet(QStringLiteral(" color:rgba(51,172,43,200);                                                                  "));
        label_2 = new QLabel(Dialog1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 130, 41, 9));
        pushButton_2 = new QPushButton(Dialog1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 320, 121, 61));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"                   background-color:rgb(150,255,150);\n"
"                   border-style:outset;                \n"
"                   border-width:8px;                   \n"
"                   border-radius:18px;                   \n"
"                   border-color:rgb(255,255,255);\n"
"                   font:bold 20px; \n"
"				 color:rgb(255,255,255);                                                                 \n"
"                   padding:6px;                          \n"
"                   \n"
"}\n"
" QPushButton:pressed{\n"
"                   background-color:rgba(100,200,150,200);\n"
"                   border-color:rgba(255,255,255,30);\n"
"                   border-style:inset;\n"
"                   color:rgba(255,127,0,100);\n"
"                   }\n"
"                 \n"
" QPushButton:hover{\n"
" 				background-color:rgba(100,255,150,200);\n"
"                  border-color:rgba(255,255,255,200);\n"
"                  color:rgba(255,127,0,200);\n"
"                 "
                        "  }"));
        spinBox = new QSpinBox(Dialog1);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(380, 211, 81, 31));
        spinBox->setStyleSheet(QStringLiteral(""));
        spinBox->setMinimum(1);
        spinBox->setMaximum(8);
        spinBox->setValue(5);
        label_3 = new QLabel(Dialog1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 130, 391, 81));
        label_3->setMinimumSize(QSize(80, 40));
        label_3->setStyleSheet(QStringLiteral(" color:rgba(51,172,43,200);                                                                  "));

        retranslateUi(Dialog1);

        QMetaObject::connectSlotsByName(Dialog1);
    } // setupUi

    void retranslateUi(QDialog *Dialog1)
    {
        Dialog1->setWindowTitle(QApplication::translate("Dialog1", "Options", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog1", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">Speed Options</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QString());
        pushButton_2->setText(QApplication::translate("Dialog1", "\350\277\224\345\233\236", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog1", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">\350\257\267\350\260\203\346\225\264\346\270\270\346\210\217\351\232\276\345\272\246(0--8)</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog1: public Ui_Dialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG1_H
