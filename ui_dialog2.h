/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QStringLiteral("Dialog2"));
        Dialog2->resize(800, 600);
        label = new QLabel(Dialog2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(286, 31, 170, 71));
        label->setStyleSheet(QStringLiteral(" color:rgba(0,129,43,200);                                                                 "));
        pushButton = new QPushButton(Dialog2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(318, 400, 120, 61));
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"                   background-color:rgb(150,255,150);\n"
"                   border-style:outset;                \n"
"                   border-width:8px;                   \n"
"                   border-radius:18px;                   \n"
"                   border-color:rgb(255,255,255);\n"
"                   font:bold 20px; \n"
"				 color:rgba(102,255,129,200);                                                                 \n"
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
"            "
                        "       }"));
        layoutWidget = new QWidget(Dialog2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(250, 131, 92, 241));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("font:20px"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font:20px\n"
""));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font:20px"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font:20px"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("font:20px"));

        verticalLayout->addWidget(label_6);

        layoutWidget1 = new QWidget(Dialog2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(450, 130, 92, 241));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("font:20px"));

        verticalLayout_2->addWidget(label_7);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QStringLiteral("font:20px"));

        verticalLayout_2->addWidget(label_8);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("font:20px"));

        verticalLayout_2->addWidget(label_9);

        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("font:20px"));

        verticalLayout_2->addWidget(label_10);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("font:20px"));

        verticalLayout_2->addWidget(label_11);


        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Hall of Fame", Q_NULLPTR));
        label->setText(QApplication::translate("Dialog2", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">\345\220\215\344\272\272\345\240\202</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Dialog2", "\347\241\256\345\256\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("Dialog2", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("Dialog2", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("Dialog2", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("Dialog2", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("Dialog2", "TextLabel", Q_NULLPTR));
        label_7->setText(QApplication::translate("Dialog2", "TextLabel", Q_NULLPTR));
        label_8->setText(QApplication::translate("Dialog2", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("Dialog2", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("Dialog2", "TextLabel", Q_NULLPTR));
        label_11->setText(QApplication::translate("Dialog2", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
