/********************************************************************************
** Form generated from reading UI file 'mainboard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINBOARD_H
#define UI_MAINBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainBoard
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *mainmenu;
    QLabel *label_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QSpinBox *spinBox;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *connect4board;
    QLabel *label_2;
    QWidget *store;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainBoard)
    {
        if (MainBoard->objectName().isEmpty())
            MainBoard->setObjectName(QString::fromUtf8("MainBoard"));
        MainBoard->resize(800, 600);
        centralwidget = new QWidget(MainBoard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 10, 761, 541));
        mainmenu = new QWidget();
        mainmenu->setObjectName(QString::fromUtf8("mainmenu"));
        label_3 = new QLabel(mainmenu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 30, 81, 16));
        pushButton = new QPushButton(mainmenu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 390, 93, 28));
        lineEdit = new QLineEdit(mainmenu);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(210, 200, 113, 22));
        spinBox = new QSpinBox(mainmenu);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(370, 190, 42, 22));
        label_4 = new QLabel(mainmenu);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(360, 160, 55, 16));
        label_5 = new QLabel(mainmenu);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(230, 160, 55, 16));
        stackedWidget->addWidget(mainmenu);
        connect4board = new QWidget();
        connect4board->setObjectName(QString::fromUtf8("connect4board"));
        connect4board->setStyleSheet(QString::fromUtf8("QWidget {\n"
"rgb(85, 0, 255)\n"
"}"));
        label_2 = new QLabel(connect4board);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 60, 55, 16));
        stackedWidget->addWidget(connect4board);
        store = new QWidget();
        store->setObjectName(QString::fromUtf8("store"));
        label = new QLabel(store);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 90, 55, 16));
        stackedWidget->addWidget(store);
        MainBoard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainBoard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainBoard->setMenuBar(menubar);
        statusbar = new QStatusBar(MainBoard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainBoard->setStatusBar(statusbar);

        retranslateUi(MainBoard);

        QMetaObject::connectSlotsByName(MainBoard);
    } // setupUi

    void retranslateUi(QMainWindow *MainBoard)
    {
        MainBoard->setWindowTitle(QApplication::translate("MainBoard", "MainBoard", nullptr));
        label_3->setText(QApplication::translate("MainBoard", "Main Menu", nullptr));
        pushButton->setText(QApplication::translate("MainBoard", "Done", nullptr));
        label_4->setText(QApplication::translate("MainBoard", "Players", nullptr));
        label_5->setText(QApplication::translate("MainBoard", "Player 1", nullptr));
        label_2->setText(QApplication::translate("MainBoard", "Board", nullptr));
        label->setText(QApplication::translate("MainBoard", "Store", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainBoard: public Ui_MainBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINBOARD_H
