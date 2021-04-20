#include "mainboard.h"
#include "ui_mainboard.h"
#include <QColor>
#include <QColorDialog>
#include <QtDebug>
#include <QMessageBox>

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
void MainBoard::on_doneButton_clicked()
{
    int playerCount = 0;
    // create new game logic
    if (ui->p1_comboBox->currentIndex() == 1){
        playerCount++;
        qDebug() << "Adding Player 1";
    }

    if (ui->p2_comboBox->currentIndex() == 1){
        playerCount++;
        qDebug() << "Adding Player 2";
    }

    if (ui->p3_comboBox->currentIndex() == 1){
        playerCount++;
        qDebug() << "Adding Player 3";
    }

    if (playerCount < 2) {
        qDebug() << "Not enough Players!!!";
        QMessageBox msgBox;
        msgBox.setText("Not enough Players!!!");
        msgBox.exec();
    }
    else
    {
        // player objects are created when Done button is pressed

        ui->stackedWidget->setCurrentIndex(1);
//        Board board;

        // create Player 1 object here
        if (ui->p1_comboBox->currentIndex() == 1) {
            Player p1(ui->p1_color->palette().color(QPalette::Button));
//            board.addPlayer(&p1);
        }

        // create Player 2 object here
        if (ui->p2_comboBox->currentIndex() == 1) {
            Player p2(ui->p2_color->palette().color(QPalette::Button));
//            board.addPlayer(&p2);
        }

        // create player 3 object here
        if (ui->p2_comboBox->currentIndex() == 1) {
            Player p3(ui->p3_color->palette().color(QPalette::Button));
//            board.addPlayer(&p3);
        }
//        this->setBoard(&board);
    }
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


void MainBoard::on_p1_comboBox_currentIndexChanged(int index)
{
    if (index == 1)
        ui->p1_name->setEnabled(true);
    else if (index == 0)
        ui->p1_name->setEnabled(false);

}

void MainBoard::on_p2_comboBox_currentIndexChanged(int index)
{
    if (index == 1)
        ui->p2_name->setEnabled(true);
    else if (index == 0)
        ui->p2_name->setEnabled(false);
}

void MainBoard::on_p3_comboBox_currentIndexChanged(int index)
{
    if (index == 1)
        ui->p3_name->setEnabled(true);
    else if (index == 0)
        ui->p3_name->setEnabled(false);
}
