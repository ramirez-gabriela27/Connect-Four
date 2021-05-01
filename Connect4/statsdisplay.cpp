#include "statsdisplay.h"
#include "ui_statsdisplay.h"
#include <QtDebug>
#include "mainboard.h"
statsDisplay::statsDisplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statsDisplay)
{
    ui->setupUi(this);
    this->setWindowTitle("Leaderboard");


}

statsDisplay::~statsDisplay()
{
    delete ui;
}

void statsDisplay::on_statsDisplay_destroyed()
{
    qDebug() << "Destroyed!";
}

void statsDisplay::get_rounds(int rounds){
    qDebug() << "Updating rounds!";
    QString str = "Rounds: " + QString::number(rounds);
    ui->round_label->setText(str);
    update();
}

void statsDisplay::closeEvent (QCloseEvent *event)
{
    event->accept();
    emit clear_show_signal();
    // emit signal to clear mainboard ptr
}

void statsDisplay::recieve_p1_name(QString name) {
    ui->name_p1->setText("P1: "+name);
}

void statsDisplay::recieve_p2_name(QString name) {
    ui->name_p2->setText("P2: "+name);

}

void statsDisplay::recieve_p3_name(QString name) {
    ui->name_p3->setText("P3: "+name);

}


void statsDisplay::clear_leaderboard() {
    ui->name_p1->setText("P1: N/A");
    ui->name_p2->setText("P2: N/A");
    ui->name_p3->setText("P3: N/A");
    ui->item_p1->setText("Items: ___");
    ui->item_p2->setText("Items: ___");
    ui->item_p3->setText("Items: ___");
    ui->pts_p1->setText("Points: ___");
    ui->pts_p2->setText("Points: ___");
    ui->pts_p3->setText("Points: ___");
    ui->up_p1->setText("Upgrades: ___");
    ui->up_p2->setText("Upgrades: ___");
    ui->up_p3->setText("Upgrades: ___");
}
