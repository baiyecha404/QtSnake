/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(800, 600);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 100, 341, 111));
        label->setMinimumSize(QSize(30, 30));
        label->setStyleSheet(QStringLiteral(" color:rgba(51,172,43,200);                                                                  "));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 300, 180, 50));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
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
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(480, 300, 180, 50));
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
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 420, 180, 50));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
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

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Mode Select", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Select Game Mode</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog", "\345\215\225\344\272\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Dialog", "\344\272\272\346\234\272", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Dialog", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
