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
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statsDisplay
{
public:
    QLabel *stat_label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *p1_stat_layout;
    QLabel *name_p1;
    QLabel *pts_p1;
    QLabel *item_p1;
    QLabel *up_p1;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *p2_stat_layout;
    QLabel *name_p2;
    QLabel *pts_p2;
    QLabel *item_p2;
    QLabel *up_p2;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *p3_stat_layout;
    QLabel *name_p3;
    QLabel *pts_p3;
    QLabel *item_p3;
    QLabel *up_p3;
    QLabel *round_label;

    void setupUi(QDialog *statsDisplay)
    {
        if (statsDisplay->objectName().isEmpty())
            statsDisplay->setObjectName(QString::fromUtf8("statsDisplay"));
        statsDisplay->setWindowModality(Qt::NonModal);
        statsDisplay->resize(400, 300);
        statsDisplay->setModal(false);
        stat_label = new QLabel(statsDisplay);
        stat_label->setObjectName(QString::fromUtf8("stat_label"));
        stat_label->setGeometry(QRect(160, 0, 81, 17));
        verticalLayoutWidget = new QWidget(statsDisplay);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 30, 121, 221));
        p1_stat_layout = new QVBoxLayout(verticalLayoutWidget);
        p1_stat_layout->setObjectName(QString::fromUtf8("p1_stat_layout"));
        p1_stat_layout->setContentsMargins(0, 0, 0, 0);
        name_p1 = new QLabel(verticalLayoutWidget);
        name_p1->setObjectName(QString::fromUtf8("name_p1"));

        p1_stat_layout->addWidget(name_p1);

        pts_p1 = new QLabel(verticalLayoutWidget);
        pts_p1->setObjectName(QString::fromUtf8("pts_p1"));

        p1_stat_layout->addWidget(pts_p1);

        item_p1 = new QLabel(verticalLayoutWidget);
        item_p1->setObjectName(QString::fromUtf8("item_p1"));

        p1_stat_layout->addWidget(item_p1);

        up_p1 = new QLabel(verticalLayoutWidget);
        up_p1->setObjectName(QString::fromUtf8("up_p1"));

        p1_stat_layout->addWidget(up_p1);

        verticalLayoutWidget_2 = new QWidget(statsDisplay);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(140, 30, 121, 221));
        p2_stat_layout = new QVBoxLayout(verticalLayoutWidget_2);
        p2_stat_layout->setObjectName(QString::fromUtf8("p2_stat_layout"));
        p2_stat_layout->setContentsMargins(0, 0, 0, 0);
        name_p2 = new QLabel(verticalLayoutWidget_2);
        name_p2->setObjectName(QString::fromUtf8("name_p2"));

        p2_stat_layout->addWidget(name_p2);

        pts_p2 = new QLabel(verticalLayoutWidget_2);
        pts_p2->setObjectName(QString::fromUtf8("pts_p2"));

        p2_stat_layout->addWidget(pts_p2);

        item_p2 = new QLabel(verticalLayoutWidget_2);
        item_p2->setObjectName(QString::fromUtf8("item_p2"));

        p2_stat_layout->addWidget(item_p2);

        up_p2 = new QLabel(verticalLayoutWidget_2);
        up_p2->setObjectName(QString::fromUtf8("up_p2"));

        p2_stat_layout->addWidget(up_p2);

        verticalLayoutWidget_3 = new QWidget(statsDisplay);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(270, 30, 121, 221));
        p3_stat_layout = new QVBoxLayout(verticalLayoutWidget_3);
        p3_stat_layout->setObjectName(QString::fromUtf8("p3_stat_layout"));
        p3_stat_layout->setContentsMargins(0, 0, 0, 0);
        name_p3 = new QLabel(verticalLayoutWidget_3);
        name_p3->setObjectName(QString::fromUtf8("name_p3"));

        p3_stat_layout->addWidget(name_p3);

        pts_p3 = new QLabel(verticalLayoutWidget_3);
        pts_p3->setObjectName(QString::fromUtf8("pts_p3"));

        p3_stat_layout->addWidget(pts_p3);

        item_p3 = new QLabel(verticalLayoutWidget_3);
        item_p3->setObjectName(QString::fromUtf8("item_p3"));

        p3_stat_layout->addWidget(item_p3);

        up_p3 = new QLabel(verticalLayoutWidget_3);
        up_p3->setObjectName(QString::fromUtf8("up_p3"));

        p3_stat_layout->addWidget(up_p3);

        round_label = new QLabel(statsDisplay);
        round_label->setObjectName(QString::fromUtf8("round_label"));
        round_label->setGeometry(QRect(160, 260, 81, 17));

        retranslateUi(statsDisplay);

        QMetaObject::connectSlotsByName(statsDisplay);
    } // setupUi

    void retranslateUi(QDialog *statsDisplay)
    {
        statsDisplay->setWindowTitle(QCoreApplication::translate("statsDisplay", "Dialog", nullptr));
        stat_label->setText(QCoreApplication::translate("statsDisplay", "Player Stats", nullptr));
        name_p1->setText(QCoreApplication::translate("statsDisplay", "<html><head/><body><p align=\"center\">P1: __name__</p></body></html>", nullptr));
        pts_p1->setText(QCoreApplication::translate("statsDisplay", "Points: ____", nullptr));
        item_p1->setText(QCoreApplication::translate("statsDisplay", "Items: ____", nullptr));
        up_p1->setText(QCoreApplication::translate("statsDisplay", "Upgrades: ____", nullptr));
        name_p2->setText(QCoreApplication::translate("statsDisplay", "<html><head/><body><p align=\"center\">P2: __name__</p></body></html>", nullptr));
        pts_p2->setText(QCoreApplication::translate("statsDisplay", "Points: ____", nullptr));
        item_p2->setText(QCoreApplication::translate("statsDisplay", "Items: ____", nullptr));
        up_p2->setText(QCoreApplication::translate("statsDisplay", "Upgrades: ____", nullptr));
        name_p3->setText(QCoreApplication::translate("statsDisplay", "<html><head/><body><p align=\"center\">P3: __name__</p></body></html>", nullptr));
        pts_p3->setText(QCoreApplication::translate("statsDisplay", "Points: ____", nullptr));
        item_p3->setText(QCoreApplication::translate("statsDisplay", "Items: ____", nullptr));
        up_p3->setText(QCoreApplication::translate("statsDisplay", "Upgrades: ____", nullptr));
        round_label->setText(QCoreApplication::translate("statsDisplay", "Round: ___", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statsDisplay: public Ui_statsDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATSDISPLAY_H
