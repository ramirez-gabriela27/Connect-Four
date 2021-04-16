#include "mainboard.h"
#include "ui_mainboard.h"

MainBoard::MainBoard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainBoard)
{
    ui->setupUi(this);
    this->setWindowTitle("Connect Four");
}

MainBoard::~MainBoard()
{
    delete ui;
}

// QGridLayout
void MainBoard::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
