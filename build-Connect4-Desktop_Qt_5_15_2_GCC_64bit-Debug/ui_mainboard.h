/********************************************************************************
** Form generated from reading UI file 'mainboard.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
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
    QLabel *MainMenu_label;
    QPushButton *doneButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *p1_comboBox;
    QLabel *p2_label;
    QComboBox *p2_comboBox;
    QLabel *p3_label;
    QLabel *p1_label;
    QComboBox *p3_comboBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *p1_color;
    QPushButton *p2_color;
    QPushButton *p3_color;
    QWidget *connect4board;
    QLabel *label_2;
    QPushButton *pushButton;
    QWidget *store;
    QLabel *label;
    QPushButton *pushButton_2;
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
        MainMenu_label = new QLabel(mainmenu);
        MainMenu_label->setObjectName(QString::fromUtf8("MainMenu_label"));
        MainMenu_label->setGeometry(QRect(290, 30, 81, 16));
        doneButton = new QPushButton(mainmenu);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(300, 390, 93, 28));
        gridLayoutWidget = new QWidget(mainmenu);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(180, 140, 301, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        p1_comboBox = new QComboBox(gridLayoutWidget);
        p1_comboBox->addItem(QString());
        p1_comboBox->addItem(QString());
        p1_comboBox->setObjectName(QString::fromUtf8("p1_comboBox"));

        gridLayout->addWidget(p1_comboBox, 0, 1, 1, 1);

        p2_label = new QLabel(gridLayoutWidget);
        p2_label->setObjectName(QString::fromUtf8("p2_label"));

        gridLayout->addWidget(p2_label, 1, 0, 1, 1);

        p2_comboBox = new QComboBox(gridLayoutWidget);
        p2_comboBox->addItem(QString());
        p2_comboBox->addItem(QString());
        p2_comboBox->setObjectName(QString::fromUtf8("p2_comboBox"));

        gridLayout->addWidget(p2_comboBox, 1, 1, 1, 1);

        p3_label = new QLabel(gridLayoutWidget);
        p3_label->setObjectName(QString::fromUtf8("p3_label"));

        gridLayout->addWidget(p3_label, 2, 0, 1, 1);

        p1_label = new QLabel(gridLayoutWidget);
        p1_label->setObjectName(QString::fromUtf8("p1_label"));
        p1_label->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(p1_label, 0, 0, 1, 1);

        p3_comboBox = new QComboBox(gridLayoutWidget);
        p3_comboBox->addItem(QString());
        p3_comboBox->addItem(QString());
        p3_comboBox->setObjectName(QString::fromUtf8("p3_comboBox"));

        gridLayout->addWidget(p3_comboBox, 2, 1, 1, 1);

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
        pushButton = new QPushButton(connect4board);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(570, 460, 121, 31));
        stackedWidget->addWidget(connect4board);
        store = new QWidget();
        store->setObjectName(QString::fromUtf8("store"));
        label = new QLabel(store);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 90, 55, 16));
        pushButton_2 = new QPushButton(store);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 370, 121, 51));
        stackedWidget->addWidget(store);
        MainBoard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainBoard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainBoard->setMenuBar(menubar);
        statusbar = new QStatusBar(MainBoard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainBoard->setStatusBar(statusbar);

        retranslateUi(MainBoard);

        QMetaObject::connectSlotsByName(MainBoard);
    } // setupUi

    void retranslateUi(QMainWindow *MainBoard)
    {
        MainBoard->setWindowTitle(QCoreApplication::translate("MainBoard", "MainBoard", nullptr));
        MainMenu_label->setText(QCoreApplication::translate("MainBoard", "Main Menu", nullptr));
        doneButton->setText(QCoreApplication::translate("MainBoard", "Done", nullptr));
        p1_comboBox->setItemText(0, QCoreApplication::translate("MainBoard", "Disabled", nullptr));
        p1_comboBox->setItemText(1, QCoreApplication::translate("MainBoard", "Enabled", nullptr));

        p2_label->setText(QCoreApplication::translate("MainBoard", "Player 2", nullptr));
        p2_comboBox->setItemText(0, QCoreApplication::translate("MainBoard", "Disabled", nullptr));
        p2_comboBox->setItemText(1, QCoreApplication::translate("MainBoard", "Enabled", nullptr));

        p3_label->setText(QCoreApplication::translate("MainBoard", "Player 3", nullptr));
        p1_label->setText(QCoreApplication::translate("MainBoard", "Player 1", nullptr));
        p3_comboBox->setItemText(0, QCoreApplication::translate("MainBoard", "Disabled", nullptr));
        p3_comboBox->setItemText(1, QCoreApplication::translate("MainBoard", "Enabled", nullptr));

        p1_color->setText(QString());
        p2_color->setText(QString());
        p3_color->setText(QString());
        label_2->setText(QCoreApplication::translate("MainBoard", "Board", nullptr));
        pushButton->setText(QCoreApplication::translate("MainBoard", "ROUND OVER", nullptr));
        label->setText(QCoreApplication::translate("MainBoard", "Store", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainBoard", "NEXT ROUND", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainBoard: public Ui_MainBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINBOARD_H
