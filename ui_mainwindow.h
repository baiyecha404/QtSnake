/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actiondsf;
    QAction *action2p;
    QAction *actionstart;
    QAction *actionpause;
    QAction *actionexit;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QStringLiteral(""));
        actiondsf = new QAction(MainWindow);
        actiondsf->setObjectName(QStringLiteral("actiondsf"));
        action2p = new QAction(MainWindow);
        action2p->setObjectName(QStringLiteral("action2p"));
        actionstart = new QAction(MainWindow);
        actionstart->setObjectName(QStringLiteral("actionstart"));
        actionpause = new QAction(MainWindow);
        actionpause->setObjectName(QStringLiteral("actionpause"));
        actionexit = new QAction(MainWindow);
        actionexit->setObjectName(QStringLiteral("actionexit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 150, 150, 50));
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
        pushButton->setAutoDefault(false);
        pushButton->setFlat(false);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 250, 150, 50));
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
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 350, 150, 50));
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
        pushButton_3->setIconSize(QSize(100, 12));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 10, 300, 81));
        label->setMinimumSize(QSize(0, 0));
        label->setPixmap(QPixmap(QString::fromUtf8("155d36ce885a4b20899a81a28e284bfa.PNG")));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setEnabled(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\350\264\252\345\220\203\350\233\207", Q_NULLPTR));
        actiondsf->setText(QApplication::translate("MainWindow", "1p", Q_NULLPTR));
        action2p->setText(QApplication::translate("MainWindow", "2p", Q_NULLPTR));
        actionstart->setText(QApplication::translate("MainWindow", "start", Q_NULLPTR));
        actionpause->setText(QApplication::translate("MainWindow", "setting", Q_NULLPTR));
        actionexit->setText(QApplication::translate("MainWindow", "exit", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\351\200\211\351\241\271", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
