/********************************************************************************
** Form generated from reading UI file 'gameplay.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEPLAY_H
#define UI_GAMEPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GamePlay
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GamePlay)
    {
        if (GamePlay->objectName().isEmpty())
            GamePlay->setObjectName(QString::fromUtf8("GamePlay"));
        GamePlay->resize(800, 600);
        centralwidget = new QWidget(GamePlay);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 240, 211, 41));
        GamePlay->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GamePlay);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        GamePlay->setMenuBar(menubar);
        statusbar = new QStatusBar(GamePlay);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GamePlay->setStatusBar(statusbar);

        retranslateUi(GamePlay);

        QMetaObject::connectSlotsByName(GamePlay);
    } // setupUi

    void retranslateUi(QMainWindow *GamePlay)
    {
        GamePlay->setWindowTitle(QCoreApplication::translate("GamePlay", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("GamePlay", "Time To PLAY!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GamePlay: public Ui_GamePlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEPLAY_H
