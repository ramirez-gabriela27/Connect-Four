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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainBoard
{
public:
    QAction *actionLeaderboard;
    QAction *actionEnd_Game;
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *mainmenu;
    QLabel *MainMenu_label;
    QPushButton *doneButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *p2_name;
    QLineEdit *p1_name;
    QComboBox *p1_comboBox;
    QComboBox *p2_comboBox;
    QLineEdit *p3_name;
    QComboBox *p3_comboBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *p1_color;
    QPushButton *p2_color;
    QPushButton *p3_color;
    QWidget *connect4board;
    QPushButton *board_shopButton;
    QLabel *playerTurnLabel;
    QLabel *show_player_color;
    QLabel *board_label;
    QGraphicsView *grid_view;
    QPushButton *column_1;
    QPushButton *column_2;
    QPushButton *column_3;
    QPushButton *column_4;
    QPushButton *column_5;
    QPushButton *column_6;
    QPushButton *column_7;
    QLabel *tracker;
    QWidget *store;
    QPushButton *store_nextRoundButton;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *p1_pts;
    QLabel *p2_pts;
    QLabel *p3_pts;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *Upgrade_Layout;
    QLabel *upgrade_label;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QPushButton *buy_upgrade;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *Design_Layout;
    QLabel *item_label;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_4;
    QPushButton *buy_item;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *store_label;
    QMenuBar *menubar;
    QMenu *menuLeaderboard;
    QMenu *menuEnd_Game;

    void setupUi(QMainWindow *MainBoard)
    {
        if (MainBoard->objectName().isEmpty())
            MainBoard->setObjectName(QString::fromUtf8("MainBoard"));
        MainBoard->resize(800, 594);
        MainBoard->setMinimumSize(QSize(800, 594));
        MainBoard->setMaximumSize(QSize(800, 594));
        actionLeaderboard = new QAction(MainBoard);
        actionLeaderboard->setObjectName(QString::fromUtf8("actionLeaderboard"));
        actionEnd_Game = new QAction(MainBoard);
        actionEnd_Game->setObjectName(QString::fromUtf8("actionEnd_Game"));
        centralwidget = new QWidget(MainBoard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 0, 761, 541));
        mainmenu = new QWidget();
        mainmenu->setObjectName(QString::fromUtf8("mainmenu"));
        MainMenu_label = new QLabel(mainmenu);
        MainMenu_label->setObjectName(QString::fromUtf8("MainMenu_label"));
        MainMenu_label->setGeometry(QRect(290, 30, 191, 20));
        doneButton = new QPushButton(mainmenu);
        doneButton->setObjectName(QString::fromUtf8("doneButton"));
        doneButton->setGeometry(QRect(300, 390, 151, 41));
        gridLayoutWidget = new QWidget(mainmenu);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(150, 120, 361, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        p2_name = new QLineEdit(gridLayoutWidget);
        p2_name->setObjectName(QString::fromUtf8("p2_name"));
        p2_name->setEnabled(false);
        p2_name->setMaxLength(15);
        p2_name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(p2_name, 1, 0, 1, 1);

        p1_name = new QLineEdit(gridLayoutWidget);
        p1_name->setObjectName(QString::fromUtf8("p1_name"));
        p1_name->setEnabled(false);
        p1_name->setMaxLength(15);
        p1_name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(p1_name, 0, 0, 1, 1);

        p1_comboBox = new QComboBox(gridLayoutWidget);
        p1_comboBox->addItem(QString());
        p1_comboBox->addItem(QString());
        p1_comboBox->setObjectName(QString::fromUtf8("p1_comboBox"));

        gridLayout->addWidget(p1_comboBox, 0, 1, 1, 1);

        p2_comboBox = new QComboBox(gridLayoutWidget);
        p2_comboBox->addItem(QString());
        p2_comboBox->addItem(QString());
        p2_comboBox->setObjectName(QString::fromUtf8("p2_comboBox"));

        gridLayout->addWidget(p2_comboBox, 1, 1, 1, 1);

        p3_name = new QLineEdit(gridLayoutWidget);
        p3_name->setObjectName(QString::fromUtf8("p3_name"));
        p3_name->setEnabled(false);
        p3_name->setMaxLength(15);
        p3_name->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(p3_name, 2, 0, 1, 1);

        p3_comboBox = new QComboBox(gridLayoutWidget);
        p3_comboBox->addItem(QString());
        p3_comboBox->addItem(QString());
        p3_comboBox->setObjectName(QString::fromUtf8("p3_comboBox"));

        gridLayout->addWidget(p3_comboBox, 2, 1, 1, 1);

        verticalLayoutWidget = new QWidget(mainmenu);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(530, 120, 81, 211));
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
        board_shopButton = new QPushButton(connect4board);
        board_shopButton->setObjectName(QString::fromUtf8("board_shopButton"));
        board_shopButton->setGeometry(QRect(620, 0, 121, 31));
        playerTurnLabel = new QLabel(connect4board);
        playerTurnLabel->setObjectName(QString::fromUtf8("playerTurnLabel"));
        playerTurnLabel->setGeometry(QRect(0, 0, 761, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Emoji"));
        font.setPointSize(14);
        playerTurnLabel->setFont(font);
        playerTurnLabel->setAutoFillBackground(true);
        playerTurnLabel->setStyleSheet(QString::fromUtf8("QLabel { background-color : light gray; color : black; }"));
        playerTurnLabel->setAlignment(Qt::AlignCenter);
        show_player_color = new QLabel(connect4board);
        show_player_color->setObjectName(QString::fromUtf8("show_player_color"));
        show_player_color->setGeometry(QRect(470, 0, 55, 41));
        board_label = new QLabel(connect4board);
        board_label->setObjectName(QString::fromUtf8("board_label"));
        board_label->setEnabled(true);
        board_label->setGeometry(QRect(0, 0, 763, 0));
        board_label->setFrameShape(QFrame::Box);
        board_label->setPixmap(QPixmap(QString::fromUtf8(":/new/images/c4-1.png")));
        board_label->setAlignment(Qt::AlignCenter);
        board_label->setWordWrap(false);
        grid_view = new QGraphicsView(connect4board);
        grid_view->setObjectName(QString::fromUtf8("grid_view"));
        grid_view->setGeometry(QRect(40, 100, 681, 441));
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        grid_view->setBackgroundBrush(brush);
        grid_view->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        column_1 = new QPushButton(connect4board);
        column_1->setObjectName(QString::fromUtf8("column_1"));
        column_1->setGeometry(QRect(30, 40, 111, 71));
        column_2 = new QPushButton(connect4board);
        column_2->setObjectName(QString::fromUtf8("column_2"));
        column_2->setGeometry(QRect(130, 40, 111, 71));
        column_3 = new QPushButton(connect4board);
        column_3->setObjectName(QString::fromUtf8("column_3"));
        column_3->setGeometry(QRect(240, 40, 111, 71));
        column_4 = new QPushButton(connect4board);
        column_4->setObjectName(QString::fromUtf8("column_4"));
        column_4->setGeometry(QRect(340, 40, 111, 71));
        column_5 = new QPushButton(connect4board);
        column_5->setObjectName(QString::fromUtf8("column_5"));
        column_5->setGeometry(QRect(445, 40, 111, 71));
        column_6 = new QPushButton(connect4board);
        column_6->setObjectName(QString::fromUtf8("column_6"));
        column_6->setGeometry(QRect(550, 40, 111, 71));
        column_7 = new QPushButton(connect4board);
        column_7->setObjectName(QString::fromUtf8("column_7"));
        column_7->setGeometry(QRect(655, 40, 111, 71));
        tracker = new QLabel(connect4board);
        tracker->setObjectName(QString::fromUtf8("tracker"));
        tracker->setGeometry(QRect(0, 10, 67, 17));
        stackedWidget->addWidget(connect4board);
        board_shopButton->raise();
        grid_view->raise();
        board_label->raise();
        playerTurnLabel->raise();
        show_player_color->raise();
        column_1->raise();
        column_2->raise();
        column_3->raise();
        column_4->raise();
        column_5->raise();
        column_6->raise();
        column_7->raise();
        tracker->raise();
        store = new QWidget();
        store->setObjectName(QString::fromUtf8("store"));
        store_nextRoundButton = new QPushButton(store);
        store_nextRoundButton->setObjectName(QString::fromUtf8("store_nextRoundButton"));
        store_nextRoundButton->setGeometry(QRect(630, 490, 111, 31));
        horizontalLayoutWidget = new QWidget(store);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 70, 761, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        p1_pts = new QLabel(horizontalLayoutWidget);
        p1_pts->setObjectName(QString::fromUtf8("p1_pts"));

        horizontalLayout->addWidget(p1_pts);

        p2_pts = new QLabel(horizontalLayoutWidget);
        p2_pts->setObjectName(QString::fromUtf8("p2_pts"));

        horizontalLayout->addWidget(p2_pts);

        p3_pts = new QLabel(horizontalLayoutWidget);
        p3_pts->setObjectName(QString::fromUtf8("p3_pts"));

        horizontalLayout->addWidget(p3_pts);

        verticalLayoutWidget_2 = new QWidget(store);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 160, 341, 321));
        Upgrade_Layout = new QVBoxLayout(verticalLayoutWidget_2);
        Upgrade_Layout->setObjectName(QString::fromUtf8("Upgrade_Layout"));
        Upgrade_Layout->setContentsMargins(0, 0, 0, 0);
        upgrade_label = new QLabel(verticalLayoutWidget_2);
        upgrade_label->setObjectName(QString::fromUtf8("upgrade_label"));

        Upgrade_Layout->addWidget(upgrade_label);

        radioButton_3 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        Upgrade_Layout->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(verticalLayoutWidget_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        Upgrade_Layout->addWidget(radioButton_2);

        radioButton = new QRadioButton(verticalLayoutWidget_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        Upgrade_Layout->addWidget(radioButton);

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

        radioButton_6 = new QRadioButton(verticalLayoutWidget_3);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        Design_Layout->addWidget(radioButton_6);

        radioButton_5 = new QRadioButton(verticalLayoutWidget_3);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        Design_Layout->addWidget(radioButton_5);

        radioButton_4 = new QRadioButton(verticalLayoutWidget_3);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        Design_Layout->addWidget(radioButton_4);

        buy_item = new QPushButton(verticalLayoutWidget_3);
        buy_item->setObjectName(QString::fromUtf8("buy_item"));

        Design_Layout->addWidget(buy_item);

        horizontalLayoutWidget_2 = new QWidget(store);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(-1, 10, 761, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        store_label = new QLabel(horizontalLayoutWidget_2);
        store_label->setObjectName(QString::fromUtf8("store_label"));

        horizontalLayout_2->addWidget(store_label);

        stackedWidget->addWidget(store);
        MainBoard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainBoard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuLeaderboard = new QMenu(menubar);
        menuLeaderboard->setObjectName(QString::fromUtf8("menuLeaderboard"));
        menuLeaderboard->setEnabled(true);
        menuEnd_Game = new QMenu(menubar);
        menuEnd_Game->setObjectName(QString::fromUtf8("menuEnd_Game"));
        MainBoard->setMenuBar(menubar);

        menubar->addAction(menuLeaderboard->menuAction());
        menubar->addAction(menuEnd_Game->menuAction());
        menuLeaderboard->addAction(actionLeaderboard);
        menuEnd_Game->addAction(actionEnd_Game);

        retranslateUi(MainBoard);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainBoard);
    } // setupUi

    void retranslateUi(QMainWindow *MainBoard)
    {
        MainBoard->setWindowTitle(QCoreApplication::translate("MainBoard", "MainBoard", nullptr));
        actionLeaderboard->setText(QCoreApplication::translate("MainBoard", "Leaderboard", nullptr));
        actionEnd_Game->setText(QCoreApplication::translate("MainBoard", "End Game", nullptr));
        MainMenu_label->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">CONNECT 4</p></body></html>", nullptr));
        doneButton->setText(QCoreApplication::translate("MainBoard", "Start Game", nullptr));
        p2_name->setPlaceholderText(QCoreApplication::translate("MainBoard", "Player 2 Name", nullptr));
        p1_name->setPlaceholderText(QCoreApplication::translate("MainBoard", "Player 1 Name", nullptr));
        p1_comboBox->setItemText(0, QCoreApplication::translate("MainBoard", "Disabled", nullptr));
        p1_comboBox->setItemText(1, QCoreApplication::translate("MainBoard", "Enabled", nullptr));

        p2_comboBox->setItemText(0, QCoreApplication::translate("MainBoard", "Disabled", nullptr));
        p2_comboBox->setItemText(1, QCoreApplication::translate("MainBoard", "Enabled", nullptr));

        p3_name->setPlaceholderText(QCoreApplication::translate("MainBoard", "Player 3 Name", nullptr));
        p3_comboBox->setItemText(0, QCoreApplication::translate("MainBoard", "Disabled", nullptr));
        p3_comboBox->setItemText(1, QCoreApplication::translate("MainBoard", "Enabled", nullptr));

        p1_color->setText(QString());
        p2_color->setText(QString());
        p3_color->setText(QString());
        board_shopButton->setText(QCoreApplication::translate("MainBoard", "SHOP", nullptr));
        playerTurnLabel->setText(QCoreApplication::translate("MainBoard", "x Player's turn", nullptr));
        show_player_color->setText(QString());
        board_label->setText(QString());
        column_1->setText(QString());
        column_2->setText(QString());
        column_3->setText(QString());
        column_4->setText(QString());
        column_5->setText(QString());
        column_6->setText(QString());
        column_7->setText(QString());
        tracker->setText(QCoreApplication::translate("MainBoard", "Round #1", nullptr));
        store_nextRoundButton->setText(QCoreApplication::translate("MainBoard", "NEXT ROUND", nullptr));
        p1_pts->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">P1[shopping]</p></body></html>", nullptr));
        p2_pts->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">P2</p></body></html>", nullptr));
        p3_pts->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">P3</p></body></html>", nullptr));
        upgrade_label->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">UPGRADES</p></body></html>", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainBoard", "2x Points (20pts)", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainBoard", "3x Points (30pts)", nullptr));
        radioButton->setText(QCoreApplication::translate("MainBoard", "5x Points (100pts)", nullptr));
        buy_upgrade->setText(QCoreApplication::translate("MainBoard", "Buy!", nullptr));
        item_label->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">ITEMS</p></body></html>", nullptr));
        radioButton_6->setText(QCoreApplication::translate("MainBoard", "Skip Player (5pts)", nullptr));
        radioButton_5->setText(QCoreApplication::translate("MainBoard", "Steal Chip (10pts)", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainBoard", "Double Turn (20pts)", nullptr));
        buy_item->setText(QCoreApplication::translate("MainBoard", "Buy!", nullptr));
        store_label->setText(QCoreApplication::translate("MainBoard", "<html><head/><body><p align=\"center\">Welcome to the Shop!</p></body></html>", nullptr));
        menuLeaderboard->setTitle(QCoreApplication::translate("MainBoard", "Leaderboard", nullptr));
        menuEnd_Game->setTitle(QCoreApplication::translate("MainBoard", "End Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainBoard: public Ui_MainBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINBOARD_H
