#include "mainboard.h"
#include "ui_mainboard.h"
#include <QColor>
#include <QColorDialog>

MainBoard::MainBoard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainBoard)
{
    ui->setupUi(this);
    this->setWindowTitle("Connect Four");

    QPalette pal = ui->p1_color->palette();
    pal.setColor(QPalette::Button, QColor(Qt::blue));
    ui->p1_color->setAutoFillBackground(true);
    ui->p1_color->setPalette(pal);
    ui->p1_color->update();

    pal = ui->p2_color->palette();
    pal.setColor(QPalette::Button, QColor(Qt::red));
    ui->p2_color->setAutoFillBackground(true);
    ui->p2_color->setPalette(pal);
    ui->p2_color->update();

    pal = ui->p3_color->palette();
    pal.setColor(QPalette::Button, QColor(Qt::green));
    ui->p3_color->setAutoFillBackground(true);
    ui->p3_color->setPalette(pal);
    ui->p3_color->update();
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

void MainBoard::on_p1_color_clicked()
{
    QColor fg;
    fg = QColorDialog::getColor(fg, this, "Foreground Color");
    // need logic to check if color picked is same as other player's color

    QPalette pal = ui->p1_color->palette();
    pal.setColor(QPalette::Button, fg);
    ui->p1_color->setAutoFillBackground(true);
    ui->p1_color->setPalette(pal);
    ui->p1_color->update();
}

void MainBoard::on_p2_color_clicked()
{
    QColor fg;
    fg = QColorDialog::getColor(fg, this, "Foreground Color");
    // need logic to check if color picked is same as other player's color

    QPalette pal = ui->p2_color->palette();
    pal.setColor(QPalette::Button, fg);
    ui->p2_color->setAutoFillBackground(true);
    ui->p2_color->setPalette(pal);
    ui->p2_color->update();
}

void MainBoard::on_p3_color_clicked()
{
    QColor fg;
    fg = QColorDialog::getColor(fg, this, "Foreground Color");
    // need logic to check if color picked is same as other player's color

    QPalette pal = ui->p3_color->palette();
    pal.setColor(QPalette::Button, fg);
    ui->p3_color->setAutoFillBackground(true);
    ui->p3_color->setPalette(pal);
    ui->p3_color->update();
}
