/********************************************************************************
** Form generated from reading UI file 'gamepanel.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPANEL_H
#define UI_GAMEPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GamePanel
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GamePanel)
    {
        if (GamePanel->objectName().isEmpty())
            GamePanel->setObjectName(QStringLiteral("GamePanel"));
        GamePanel->resize(930, 930);
        centralwidget = new QWidget(GamePanel);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(830, 30, 81, 20));
        label->setStyleSheet(QLatin1String("color:red;\n"
"font:bold 20px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(830, 0, 91, 20));
        label_2->setStyleSheet(QLatin1String("color:red;\n"
"font:bold 20px;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(660, 170, 91, 20));
        label_3->setStyleSheet(QLatin1String("color:red;\n"
"font:bold 20px;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(660, 200, 81, 20));
        label_4->setStyleSheet(QLatin1String("color:red;\n"
"font:bold 20px;"));
        GamePanel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GamePanel);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 930, 17));
        GamePanel->setMenuBar(menubar);
        statusbar = new QStatusBar(GamePanel);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        GamePanel->setStatusBar(statusbar);

        retranslateUi(GamePanel);

        QMetaObject::connectSlotsByName(GamePanel);
    } // setupUi

    void retranslateUi(QMainWindow *GamePanel)
    {
        GamePanel->setWindowTitle(QApplication::translate("GamePanel", "Greedy Snake", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("GamePanel", "score", Q_NULLPTR));
        label_3->setText(QApplication::translate("GamePanel", "score", Q_NULLPTR));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GamePanel: public Ui_GamePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPANEL_H
