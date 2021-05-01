#include "statsdisplay.h"
#include "ui_statsdisplay.h"
#include <QtDebug>
#include "mainboard.h"
statsDisplay::statsDisplay(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::statsDisplay)
{
    ui->setupUi(this);

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
    QString str = "Rounds: " + QString(rounds);
    ui->round_label->setText(str);
    update();
}

void statsDisplay::closeEvent (QCloseEvent *event)
{
    event->accept();
    emit clear_show_signal();
    // emit signal to clear mainboard ptr
}
