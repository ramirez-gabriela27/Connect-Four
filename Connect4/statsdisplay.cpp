#include "statsdisplay.h"
#include "ui_statsdisplay.h"

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
