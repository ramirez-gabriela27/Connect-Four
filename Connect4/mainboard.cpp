#include "mainboard.h"
#include "ui_mainboard.h"
#include "statsdisplay.h"
#include <QColor>
#include <QColorDialog>
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

    ui->stackedWidget->setCurrentIndex(0);
}

MainBoard::~MainBoard()
{
    delete ui;
}


////////////////////////////////////////////////// MAIN MENU //////////////////////////////////////////////////


void MainBoard::on_doneButton_clicked()
{
    unsigned int sentry = 0;
    std::vector<int> player_vec;
    // create new game logic
    if (ui->p1_comboBox->currentIndex() == 1)
    {
        player_vec.push_back(0);
    }

    if (ui->p2_comboBox->currentIndex() == 1)
    {
        player_vec.push_back(1);
    }


    if (ui->p3_comboBox->currentIndex() == 1)
    {
        player_vec.push_back(2);
    }

    // validate name inputs
    for (int i : player_vec)
    {
        switch (i) {
        case 0:
            sentry += int(emit on_p1_name_editingFinished());
            break;
        case 1:
            sentry += int(emit on_p2_name_editingFinished());
            break;
        case 2:
            sentry += int(emit on_p3_name_editingFinished());
            break;
        }
    }

    if (player_vec.size() < 2)
    {
        qDebug() << "Not enough Players!!!";
        QMessageBox msgBox;
        msgBox.setText("Not enough Players!!!");
        msgBox.exec();
    }

    else if (sentry != player_vec.size())
    {
        QMessageBox msgBox;
        msgBox.setText("Player names must be unique or not empty!");
        msgBox.exec();
        qDebug() << "Player names must be unique or not empty!";
        qDebug() << "vec size is " << int(player_vec.size());
        qDebug() << "Sentry is " << sentry;
    }
    else {

        // player objects are created when Done button is pressed

        //move to the game play screen -- form here access
                //board and shop
        ui->stackedWidget->setCurrentIndex(1);
        qDebug() << "Starting Game... Creating Player Objects...";
        Board* board = new Board;

        // create Player 1 object here
        if (ui->p1_comboBox->currentIndex() == 1) {
            Player p1(ui->p1_color->palette().color(QPalette::Button));
            qDebug() << "Adding Player 1...";

            // set player 1 name from ui->p1_name
            p1.setName(ui->p1_name->text());
            board->addPlayer(&p1);
        }

        // create Player 2 object here
        if (ui->p2_comboBox->currentIndex() == 1) {
            Player p2(ui->p2_color->palette().color(QPalette::Button));
            qDebug() << "Adding Player 2...";

            // set player 2 name from ui->p2_name
            p2.setName(ui->p2_name->text());
            board->addPlayer(&p2);
        }

        // create player 3 object here
        if (ui->p3_comboBox->currentIndex() == 1) {
            Player p3(ui->p3_color->palette().color(QPalette::Button));
            qDebug() << "Adding Player 3...";

            // set player 3 name from ui->p3_name
            p3.setName(ui->p3_name->text());
            board->addPlayer(&p3);
        }
        // set created board object pointer to be referenced by mainboard
        this->setBoard(board);
        qDebug() << "Done.";
    }
}

bool MainBoard::on_p1_name_editingFinished()
{
    if (ui->p1_name->text() == "")
    {
        qDebug() << "name cannot be empty!";
        return false;
    }
    else if (ui->p1_name->text() == ui->p2_name->text() || ui->p1_name->text() == ui->p3_name->text())
    {
        qDebug() << "name cannot be same as other player names";
        return false;
    }
    else
        return true;
}

bool MainBoard::on_p2_name_editingFinished()
{
    if (ui->p2_name->text() == "")
    {
        qDebug() << "name cannot be empty!";
        return false;
    }
    else if (ui->p2_name->text() == ui->p1_name->text() || ui->p2_name->text() == ui->p3_name->text())
    {
        qDebug() << "name cannot be same as other player names";
        return false;
    }
    else
        return true;

}

bool MainBoard::on_p3_name_editingFinished()
{
    if (ui->p3_name->text() == "")
    {
        qDebug() << "name cannot be empty!";
        return false;
    }
    else if (ui->p3_name->text() == ui->p2_name->text() || ui->p3_name->text() == ui->p1_name->text())
    {
        qDebug() << "name cannot be same as other player names";
        return false;
    }
    else
        return true;

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
    {
        ui->p1_name->setEnabled(true);
        emit on_p1_name_editingFinished();
    }
    else if (index == 0)
    {
        ui->p1_name->setEnabled(false);
        ui->doneButton->setEnabled(true);
    }
}

void MainBoard::on_p2_comboBox_currentIndexChanged(int index)
{
    if (index == 1)
    {
        ui->p2_name->setEnabled(true);
        emit on_p2_name_editingFinished();
    }
    else if (index == 0)
    {
        ui->p2_name->setEnabled(false);
        ui->doneButton->setEnabled(true);
    }
}

void MainBoard::on_p3_comboBox_currentIndexChanged(int index)
{
    if (index == 1)
    {
        ui->p3_name->setEnabled(true);
        emit on_p3_name_editingFinished();
    }
    else if (index == 0)
    {
        ui->p3_name->setEnabled(false);
        ui->doneButton->setEnabled(true);
    }
}


////////////////////////////////////////////////// BOARD //////////////////////////////////////////////////
// Use QGridLayout

void MainBoard::on_board_endGameButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Quitting Game");
    msgBox.setText("Are you sure you want to exit?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        qDebug() << "Ending current game session...";
        //go back to home screen
        ui->stackedWidget->setCurrentIndex(0);
        delete this->getBoardRef();
    }
}

void MainBoard::on_board_shopButton_clicked()
{
    //the round is over, we shop
    ui->stackedWidget->setCurrentIndex(2);
    qDebug() << "Switching to shopping screen.";
}


////////////////////////////////////////////////// STORE //////////////////////////////////////////////////


void MainBoard::on_store_endGameButton_clicked()
{
    QMessageBox msgBox;
    msgBox.setWindowTitle("Quitting Game");
    msgBox.setText("Are you sure you want to exit?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes)
    {
        qDebug() << "Ending current game session...";
        //go back to home screen
        ui->stackedWidget->setCurrentIndex(0);
        delete this->getBoardRef();
    }
}

void MainBoard::on_store_nextRoundButton_clicked()
{
    //after shopping, next round
    ui->stackedWidget->setCurrentIndex(1);
    qDebug() << "Shopping finished... Starting next round...";
}


////////////////////////////////////////////////// STORE //////////////////////////////////////////////////


void MainBoard::on_actionStats_triggered()
{
    statsDisplay *stat = new statsDisplay(this);
    stat->open();
    qDebug() << "Displaying Stats";
}
