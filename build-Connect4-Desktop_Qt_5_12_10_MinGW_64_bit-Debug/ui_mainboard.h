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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
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
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *p1_color;
    QPushButton *p2_color;
    QPushButton *p3_color;
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
        stackedWidget->setGeometry(QRect(40, 0, 761, 541));
        mainmenu = new QWidget();
        mainmenu->setObjectName(QString::fromUtf8("mainmenu"));
        label_3 = new QLabel(mainmenu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 30, 81, 16));
        pushButton = new QPushButton(mainmenu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 390, 93, 28));
        gridLayoutWidget = new QWidget(mainmenu);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(180, 140, 301, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        comboBox_3 = new QComboBox(gridLayoutWidget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 2, 1, 1, 1);

        verticalLayoutWidget = new QWidget(mainmenu);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(490, 140, 131, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        p1_color = new QPushButton(verticalLayoutWidget);
        p1_color->setObjectName(QString::fromUtf8("p1_color"));
        p1_color->setFlat(true);

        verticalLayout->addWidget(p1_color);

        p2_color = new QPushButton(verticalLayoutWidget);
        p2_color->setObjectName(QString::fromUtf8("p2_color"));
        p2_color->setFlat(true);

        verticalLayout->addWidget(p2_color);

        p3_color = new QPushButton(verticalLayoutWidget);
        p3_color->setObjectName(QString::fromUtf8("p3_color"));
        p3_color->setFlat(true);

        verticalLayout->addWidget(p3_color);

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
        comboBox->setItemText(0, QApplication::translate("MainBoard", "Disabled", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainBoard", "Enabled", nullptr));

        label_6->setText(QApplication::translate("MainBoard", "Player 2", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MainBoard", "Disabled", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainBoard", "Enabled", nullptr));

        label_7->setText(QApplication::translate("MainBoard", "Player 3", nullptr));
        label_5->setText(QApplication::translate("MainBoard", "Player 1", nullptr));
        comboBox_3->setItemText(0, QApplication::translate("MainBoard", "Disabled", nullptr));
        comboBox_3->setItemText(1, QApplication::translate("MainBoard", "Enabled", nullptr));

        p1_color->setText(QString());
        p2_color->setText(QString());
        p3_color->setText(QString());
        label_2->setText(QApplication::translate("MainBoard", "Board", nullptr));
        label->setText(QApplication::translate("MainBoard", "Store", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainBoard: public Ui_MainBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINBOARD_H
