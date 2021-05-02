/********************************************************************************
** Form generated from reading UI file 'statsdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATSDISPLAY_H
#define UI_STATSDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statsDisplay
{
public:
    QLabel *stat_label;
    QLabel *round_label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *p1_stat_layout;
    QLabel *name_p1;
    QLabel *pts_p1;
    QLabel *item_p1;
    QLabel *up_p1;
    QVBoxLayout *p2_stat_layout;
    QLabel *name_p2;
    QLabel *pts_p2;
    QLabel *item_p2;
    QLabel *up_p2;
    QVBoxLayout *p3_stat_layout;
    QLabel *name_p3;
    QLabel *pts_p3;
    QLabel *item_p3;
    QLabel *up_p3;

    void setupUi(QDialog *statsDisplay)
    {
        if (statsDisplay->objectName().isEmpty())
            statsDisplay->setObjectName(QString::fromUtf8("statsDisplay"));
        statsDisplay->setWindowModality(Qt::NonModal);
        statsDisplay->resize(425, 300);
        statsDisplay->setModal(false);
        stat_label = new QLabel(statsDisplay);
        stat_label->setObjectName(QString::fromUtf8("stat_label"));
        stat_label->setGeometry(QRect(140, 10, 121, 20));
        QFont font;
        font.setPointSize(10);
        stat_label->setFont(font);
        round_label = new QLabel(statsDisplay);
        round_label->setObjectName(QString::fromUtf8("round_label"));
        round_label->setGeometry(QRect(160, 260, 81, 17));
        horizontalLayoutWidget = new QWidget(statsDisplay);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 401, 221));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        p1_stat_layout = new QVBoxLayout();
        p1_stat_layout->setObjectName(QString::fromUtf8("p1_stat_layout"));
        name_p1 = new QLabel(horizontalLayoutWidget);
        name_p1->setObjectName(QString::fromUtf8("name_p1"));
        name_p1->setAlignment(Qt::AlignCenter);

        p1_stat_layout->addWidget(name_p1);

        pts_p1 = new QLabel(horizontalLayoutWidget);
        pts_p1->setObjectName(QString::fromUtf8("pts_p1"));
        pts_p1->setAlignment(Qt::AlignCenter);

        p1_stat_layout->addWidget(pts_p1);

        item_p1 = new QLabel(horizontalLayoutWidget);
        item_p1->setObjectName(QString::fromUtf8("item_p1"));
        item_p1->setAlignment(Qt::AlignCenter);

        p1_stat_layout->addWidget(item_p1);

        up_p1 = new QLabel(horizontalLayoutWidget);
        up_p1->setObjectName(QString::fromUtf8("up_p1"));
        up_p1->setAlignment(Qt::AlignCenter);

        p1_stat_layout->addWidget(up_p1);


        horizontalLayout->addLayout(p1_stat_layout);

        p2_stat_layout = new QVBoxLayout();
        p2_stat_layout->setObjectName(QString::fromUtf8("p2_stat_layout"));
        name_p2 = new QLabel(horizontalLayoutWidget);
        name_p2->setObjectName(QString::fromUtf8("name_p2"));
        name_p2->setAlignment(Qt::AlignCenter);

        p2_stat_layout->addWidget(name_p2);

        pts_p2 = new QLabel(horizontalLayoutWidget);
        pts_p2->setObjectName(QString::fromUtf8("pts_p2"));
        pts_p2->setAlignment(Qt::AlignCenter);

        p2_stat_layout->addWidget(pts_p2);

        item_p2 = new QLabel(horizontalLayoutWidget);
        item_p2->setObjectName(QString::fromUtf8("item_p2"));
        item_p2->setAlignment(Qt::AlignCenter);

        p2_stat_layout->addWidget(item_p2);

        up_p2 = new QLabel(horizontalLayoutWidget);
        up_p2->setObjectName(QString::fromUtf8("up_p2"));
        up_p2->setAlignment(Qt::AlignCenter);

        p2_stat_layout->addWidget(up_p2);


        horizontalLayout->addLayout(p2_stat_layout);

        p3_stat_layout = new QVBoxLayout();
        p3_stat_layout->setObjectName(QString::fromUtf8("p3_stat_layout"));
        name_p3 = new QLabel(horizontalLayoutWidget);
        name_p3->setObjectName(QString::fromUtf8("name_p3"));
        name_p3->setAlignment(Qt::AlignCenter);

        p3_stat_layout->addWidget(name_p3);

        pts_p3 = new QLabel(horizontalLayoutWidget);
        pts_p3->setObjectName(QString::fromUtf8("pts_p3"));
        pts_p3->setAlignment(Qt::AlignCenter);

        p3_stat_layout->addWidget(pts_p3);

        item_p3 = new QLabel(horizontalLayoutWidget);
        item_p3->setObjectName(QString::fromUtf8("item_p3"));
        item_p3->setAlignment(Qt::AlignCenter);

        p3_stat_layout->addWidget(item_p3);

        up_p3 = new QLabel(horizontalLayoutWidget);
        up_p3->setObjectName(QString::fromUtf8("up_p3"));
        up_p3->setAlignment(Qt::AlignCenter);

        p3_stat_layout->addWidget(up_p3);


        horizontalLayout->addLayout(p3_stat_layout);


        retranslateUi(statsDisplay);

        QMetaObject::connectSlotsByName(statsDisplay);
    } // setupUi

    void retranslateUi(QDialog *statsDisplay)
    {
        statsDisplay->setWindowTitle(QCoreApplication::translate("statsDisplay", "Dialog", nullptr));
        stat_label->setText(QCoreApplication::translate("statsDisplay", "LEADERBOARD", nullptr));
        round_label->setText(QCoreApplication::translate("statsDisplay", "Round: ___", nullptr));
        name_p1->setText(QCoreApplication::translate("statsDisplay", "P1: N/A", nullptr));
        pts_p1->setText(QCoreApplication::translate("statsDisplay", "Points: ____", nullptr));
        item_p1->setText(QCoreApplication::translate("statsDisplay", "Items: ____", nullptr));
        up_p1->setText(QCoreApplication::translate("statsDisplay", "Upgrades: ____", nullptr));
        name_p2->setText(QCoreApplication::translate("statsDisplay", "P2: N/A", nullptr));
        pts_p2->setText(QCoreApplication::translate("statsDisplay", "Points: ____", nullptr));
        item_p2->setText(QCoreApplication::translate("statsDisplay", "Items: ____", nullptr));
        up_p2->setText(QCoreApplication::translate("statsDisplay", "Upgrades: ____", nullptr));
        name_p3->setText(QCoreApplication::translate("statsDisplay", "P3: N/A", nullptr));
        pts_p3->setText(QCoreApplication::translate("statsDisplay", "Points: ____", nullptr));
        item_p3->setText(QCoreApplication::translate("statsDisplay", "Items: ____", nullptr));
        up_p3->setText(QCoreApplication::translate("statsDisplay", "Upgrades: ____", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statsDisplay: public Ui_statsDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSDISPLAY_H
