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
    if (ui->p1_comboBox->currentIndex() == 1)
        playerCount++;


    if (ui->p2_comboBox->currentIndex() == 1)
        playerCount++;


    if (ui->p3_comboBox->currentIndex() == 1)
        playerCount++;


    if (playerCount < 2) {
        qDebug() << "Not enough Players!!!";
        QMessageBox msgBox;
        msgBox.setText("Not enough Players!!!");
        msgBox.exec();
    }
    else
    {

        // player objects are created when Done button is pressed

        //move to the game play screen -- form here access
                //board and shop
        ui->stackedWidget->setCurrentIndex(1);
        qDebug() << "Starting Game... Creating Player Objects...";
//        Board board;

        // create Player 1 object here
        if (ui->p1_comboBox->currentIndex() == 1) {
            Player p1(ui->p1_color->palette().color(QPalette::Button));
            qDebug() << "Adding Player 1";

            // set player 1 name from ui->p1_name

//            board.addPlayer(&p1);
        }

        // create Player 2 object here
        if (ui->p2_comboBox->currentIndex() == 1) {
            Player p2(ui->p2_color->palette().color(QPalette::Button));
            qDebug() << "Adding Player 2";

            // set player 2 name from ui->p2_name

//            board.addPlayer(&p2);
        }

        // create player 3 object here
        if (ui->p2_comboBox->currentIndex() == 1) {
            Player p3(ui->p3_color->palette().color(QPalette::Button));
            qDebug() << "Adding Player 3";

            // set player 3 name from ui->p3_name

//            board.addPlayer(&p3);
        }
//        this->setBoard(&board);
        qDebug() << "Done.";
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
    if (index == 1) {
        ui->p1_name->setEnabled(true);
        emit on_p1_name_editingFinished();
    }
    else if (index == 0) {
        ui->p1_name->setEnabled(false);
        ui->doneButton->setEnabled(true);
    }

}

void MainBoard::on_p2_comboBox_currentIndexChanged(int index)
{
    if (index == 1) {
        ui->p2_name->setEnabled(true);
        emit on_p2_name_editingFinished();
    }
    else if (index == 0) {
        ui->p2_name->setEnabled(false);
        ui->doneButton->setEnabled(true);
    }
}

void MainBoard::on_p3_comboBox_currentIndexChanged(int index)
{
    if (index == 1) {
        ui->p3_name->setEnabled(true);
        emit on_p3_name_editingFinished();
    }
    else if (index == 0) {
        ui->p3_name->setEnabled(false);
        ui->doneButton->setEnabled(true);
    }
}

void MainBoard::on_p1_name_editingFinished()
{
    if (ui->p1_name->text() == "") {
        qDebug() << "name cannot be empty!";
        ui->doneButton->setEnabled(false);
    }
    else if (ui->p1_name->text() == ui->p2_name->text() || ui->p1_name->text() == ui->p3_name->text()) {
        qDebug() << "name cannot be same as other player names";
        ui->doneButton->setEnabled(false);
    }
    else
        ui->doneButton->setEnabled(true);
}

void MainBoard::on_p2_name_editingFinished()
{
    if (ui->p1_name->text() == "") {
        qDebug() << "name cannot be empty!";
        ui->doneButton->setEnabled(false);
    }
    else
        ui->doneButton->setEnabled(true);
}

void MainBoard::on_p3_name_editingFinished()
{
    if (ui->p1_name->text() == "") {
        qDebug() << "name cannot be empty!";
        ui->doneButton->setEnabled(false);
    }
    else
        ui->doneButton->setEnabled(true);
}

void MainBoard::on_pushButton_clicked()
{
    //the round is over, we shop
    ui->stackedWidget->setCurrentIndex(2);
    qDebug() << "time to do some shopping";
}

void MainBoard::on_pushButton_2_clicked()
{
    //after shopping, next round
    ui->stackedWidget->setCurrentIndex(1);
    qDebug() << "shopping done, next round";
}

void MainBoard::on_pushButton_3_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Quitting Game");
    msgBox.setText("Are you sure you want to exit?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes){
        qDebug() << "ENDING GAME";
        //go back to home screen
        ui->stackedWidget->setCurrentIndex(0);
    }
}

void MainBoard::on_pushButton_4_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Quitting Game");
    msgBox.setText("Are you sure you want to exit?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes){
        qDebug() << "ENDING GAME";
        //go back to home screen
        ui->stackedWidget->setCurrentIndex(0);
    }
}

void MainBoard::on_board_endGameButton_clicked()
{

}
