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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QComboBox *p3_comboBox;
    QLabel *p2_label;
    QLineEdit *p2_name;
    QComboBox *p2_comboBox;
    QLabel *p3_label;
    QLabel *p1_label;
    QLineEdit *p1_name;
    QLineEdit *p3_name;
    QComboBox *p1_comboBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *p1_color;
    QPushButton *p2_color;
    QPushButton *p3_color;
    QWidget *connect4board;
    QLabel *board_label;
    QPushButton *board_endGameButton;
    QPushButton *board_shopButton;
    QLabel *label;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QWidget *store;
    QLabel *store_label;
    QPushButton *store_nextRoundButton;
    QPushButton *store_endGameButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *p3_pts;
    QLabel *p2_pts;
    QLabel *p1_pts;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *Upgrade_Layout;
    QLabel *upgrade_label;
    QPushButton *buy_upgrade;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *Design_Layout;
    QLabel *item_label;
    QPushButton *buy_item;
    QMenuBar *menubar;
    QMenu *menuStats;
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
        stackedWidget->setGeometry(QRect(20, 10, 761, 541));
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
        gridLayoutWidget->setGeometry(QRect(150, 140, 331, 181));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        p3_comboBox = new QComboBox(gridLayoutWidget);
        p3_comboBox->addItem(QString());
        p3_comboBox->addItem(QString());
        p3_comboBox->setObjectName(QString::fromUtf8("p3_comboBox"));

        gridLayout->addWidget(p3_comboBox, 2, 2, 1, 1);

        p2_label = new QLabel(gridLayoutWidget);
        p2_label->setObjectName(QString::fromUtf8("p2_label"));

        gridLayout->addWidget(p2_label, 1, 0, 1, 1);

        p2_name = new QLineEdit(gridLayoutWidget);
        p2_name->setObjectName(QString::fromUtf8("p2_name"));
        p2_name->setEnabled(false);
        p2_name->setMaxLength(15);
        p2_name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(p2_name, 1, 1, 1, 1);

        p2_comboBox = new QComboBox(gridLayoutWidget);
        p2_comboBox->addItem(QString());
        p2_comboBox->addItem(QString());
        p2_comboBox->setObjectName(QString::fromUtf8("p2_comboBox"));

        gridLayout->addWidget(p2_comboBox, 1, 2, 1, 1);

        p3_label = new QLabel(gridLayoutWidget);
        p3_label->setObjectName(QString::fromUtf8("p3_label"));

        gridLayout->addWidget(p3_label, 2, 0, 1, 1);

        p1_label = new QLabel(gridLayoutWidget);
        p1_label->setObjectName(QString::fromUtf8("p1_label"));
        p1_label->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(p1_label, 0, 0, 1, 1);

        p1_name = new QLineEdit(gridLayoutWidget);
        p1_name->setObjectName(QString::fromUtf8("p1_name"));
        p1_name->setEnabled(false);
        p1_name->setMaxLength(15);
        p1_name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(p1_name, 0, 1, 1, 1);

        p3_name = new QLineEdit(gridLayoutWidget);
        p3_name->setObjectName(QString::fromUtf8("p3_name"));
        p3_name->setEnabled(false);
        p3_name->setMaxLength(15);
        p3_name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(p3_name, 2, 1, 1, 1);

        p1_comboBox = new QComboBox(gridLayoutWidget);
        p1_comboBox->addItem(QString());
        p1_comboBox->addItem(QString());
        p1_comboBox->setObjectName(QString::fromUtf8("p1_comboBox"));

        gridLayout->addWidget(p1_comboBox, 0, 2, 1, 1);

        verticalLayoutWidget = new QWidget(mainmenu);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(500, 140, 71, 181));
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
        board_label = new QLabel(connect4board);
        board_label->setObjectName(QString::fromUtf8("board_label"));
        board_label->setGeometry(QRect(-6, 0, 761, 541));
        board_label->setPixmap(QPixmap(QString::fromUtf8(":/new/images/c4-1.png")));
        board_endGameButton = new QPushButton(connect4board);
        board_endGameButton->setObjectName(QString::fromUtf8("board_endGameButton"));
        board_endGameButton->setGeometry(QRect(10, 10, 89, 25));
        board_shopButton = new QPushButton(connect4board);
        board_shopButton->setObjectName(QString::fromUtf8("board_shopButton"));
        board_shopButton->setGeometry(QRect(610, 20, 121, 31));
        label = new QLabel(connect4board);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 10, 91, 20));
        label->setAutoFillBackground(true);
        gridLayoutWidget_2 = new QWidget(connect4board);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(-1, 59, 761, 481));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(connect4board);
        store = new QWidget();
        store->setObjectName(QString::fromUtf8("store"));
        store_label = new QLabel(store);
        store_label->setObjectName(QString::fromUtf8("store_label"));
        store_label->setGeometry(QRect(320, 30, 151, 41));
        store_nextRoundButton = new QPushButton(store);
        store_nextRoundButton->setObjectName(QString::fromUtf8("store_nextRoundButton"));
        store_nextRoundButton->setGeometry(QRect(630, 490, 111, 31));
        store_endGameButton = new QPushButton(store);
        store_endGameButton->setObjectName(QString::fromUtf8("store_endGameButton"));
        store_endGameButton->setGeometry(QRect(10, 10, 89, 25));
        horizontalLayoutWidget = new QWidget(store);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 70, 761, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        p3_pts = new QLabel(horizontalLayoutWidget);
        p3_pts->setObjectName(QString::fromUtf8("p3_pts"));

        horizontalLayout->addWidget(p3_pts);

        p2_pts = new QLabel(horizontalLayoutWidget);
        p2_pts->setObjectName(QString::fromUtf8("p2_pts"));

        horizontalLayout->addWidget(p2_pts);

        p1_pts = new QLabel(horizontalLayoutWidget);
        p1_pts->setObjectName(QString::fromUtf8("p1_pts"));

        horizontalLayout->addWidget(p1_pts);

        verticalLayoutWidget_2 = new QWidget(store);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 160, 341, 321));
        Upgrade_Layout = new QVBoxLayout(verticalLayoutWidget_2);
        Upgrade_Layout->setObjectName(QString::fromUtf8("Upgrade_Layout"));
        Upgrade_Layout->setContentsMargins(0, 0, 0, 0);
        upgrade_label = new QLabel(verticalLayoutWidget_2);
        upgrade_label->setObjectName(QString::fromUtf8("upgrade_label"));

        Upgrade_Layout->addWidget(upgrade_label);

        buy_upgrade = new QPushButton(verticalLayoutWidget_2);
        buy_upgrade->setObjectName(QString::fromUtf8("buy_upgrade"));

        Upgrade_Layout->addWidget(buy_upgrade);

        verticalLayoutWidget_3 = new QWidget(store);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(400, 160, 341, 321));
        Design_Layout = new QVBoxLayout(verticalLayoutWidget_3);
        Design_Layout->setObjectName(QString::fromUtf8("Design_Layout"));
        Design_Layout->setContentsMargins(0, 0, 0, 0);
        item_label = new QLabel(verticalLayoutWidget_3);
        item_label->setObjectName(QString::fromUtf8("item_label"));

        Design_Layout->addWidget(item_label);

        buy_item = new QPushButton(verticalLayoutWidget_3);
        buy_item->setObjectName(QString::fromUtf8("buy_item"));

        Design_Layout->addWidget(buy_item);

        stackedWidget->addWidget(store);
        MainBoard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainBoard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuStats = new QMenu(menubar);
        menuStats->setObjectName(QString::fromUtf8("menuStats"));
        MainBoard->setMenuBar(menubar);
        statusbar = new QStatusBar(MainBoard);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainBoard->setStatusBar(statusbar);

        menubar->addAction(menuStats->menuAction());

        retranslateUi(MainBoard);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainBoard);
    } // setupUi

    void retranslateUi(QMainWindow *MainBoard)
    {
        MainBoard->setWindowTitle(QCoreApplication::translate("MainBoard", "MainBoard", nullptr));
        MainMenu_label->setText(QCoreApplication::translate("MainBoard", "Main Menu", nullptr));
        doneButton->setText(QCoreApplication::translate("MainBoard", "Done", nullptr));
        p3_comboBox->setItemText(0, QCoreApplication::translate("MainBoard", "Disabled", nullptr));
        p3_comboBox->setItemText(1, QCoreApplication::translate("MainBoard", "Enabled", nullptr));

        p2_label->setText(QCoreApplication::translate("MainBoard", "Player 2", nullptr));
        p2_name->setPlaceholderText(QCoreApplication::translate("MainBoard", "Player 2 Name", nullptr));
        p2_comboBox->setItemText(0, QCoreApplication::translate("MainBoard", "Disabled", nullptr));
        p2_comboBox->setItemText(1, QCoreApplication::translate("MainBoard", "Enabled", nullptr));

        p3_label->setText(QCoreApplication::translate("MainBoard", "Player 3", nullptr));
        p1_label->setText(QCoreApplication::translate("MainBoard", "Player 1", nullptr));
        p1_name->setPlaceholderText(QCoreApplication::translate("MainBoard", "Player 1 Name", nullptr));
        p3_name->setPlaceholderText(QCoreApplication::translate("MainBoard", "Player 3 Name", nullptr));
        p1_comboBox->setItemText(0, QCoreApplication::translate("MainBoard", "Disabled", nullptr));
        p1_comboBox->setItemText(1, QCoreApplication::translate("MainBoard", "Enabled", nullptr));

        p1_color->setText(QString());
        p2_color->setText(QString());
        p3_color->setText(QString());
        board_label->setText(QString());
        board_endGameButton->setText(QCoreApplication::translate("MainBoard", "End Game", nullptr));
        board_shopButton->setText(QCoreApplication::translate("MainBoard", "SHOP", nullptr));
        label->setText(QCoreApplication::translate("MainBoard", "x Player's turn", nullptr));
        store_label->setText(QCoreApplication::translate("MainBoard", "Welcome to the Shop", nullptr));
        store_nextRoundButton->setText(QCoreApplication::translate("MainBoard", "NEXT ROUND", nullptr));
        store_endGameButton->setText(QCoreApplication::translate("MainBoard", "End Game", nullptr));
        p3_pts->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">P1: ____ pts [shopping]</p></body></html>", nullptr));
        p2_pts->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">P2: ____ pts</p></body></html>", nullptr));
        p1_pts->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">P3: ____ pts</p></body></html>", nullptr));
        upgrade_label->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">UPGRADES</p></body></html>", nullptr));
        buy_upgrade->setText(QCoreApplication::translate("MainBoard", "Buy!", nullptr));
        item_label->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">ITEMS</p></body></html>", nullptr));
        buy_item->setText(QCoreApplication::translate("MainBoard", "Buy!", nullptr));
        menuStats->setTitle(QCoreApplication::translate("MainBoard", "Stats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainBoard: public Ui_MainBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINBOARD_H
