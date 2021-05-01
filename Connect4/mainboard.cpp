#include "mainboard.h"
#include "ui_mainboard.h"
#include <QColor>
#include <QColorDialog>
#include <QMessageBox>
#include <QRegion>

MainBoard::MainBoard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainBoard)
{
    ui->setupUi(this);
    this->setWindowTitle("Connect Four");
    QGraphicsView * view = ui->grid_view;
    scene = new QGraphicsScene;
//    view->setScene(scene);
//    ui->grid_view->setBackgroundBrush(QBrush(Qt::red, Qt::SolidPattern));
    ui->grid_view->setScene(scene);

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
    // set menu items invisible
    ui->menuLeaderboard->setTitle("");
    ui->menuLeaderboard->setDisabled(true);
    ui->menuEnd_Game->setTitle("");
    ui->menuEnd_Game->setDisabled(true);
    statsDisplay *sd = new statsDisplay(this);
    this->setStatsDisplayPtr(sd);
    connect(sd, &statsDisplay::clear_show_signal, this, &MainBoard::recieve_clear_signal);
    connect(this, &MainBoard::send_rounds, sd, &statsDisplay::get_rounds);
    connect(this, &MainBoard::send_p1_name, sd, &statsDisplay::recieve_p1_name);
    connect(this, &MainBoard::send_p2_name, sd, &statsDisplay::recieve_p2_name);
    connect(this, &MainBoard::send_p3_name, sd, &statsDisplay::recieve_p3_name);

    connect(this, &MainBoard::clear_leaderboard, sd, &statsDisplay::clear_leaderboard);


    QRect rect(0,0,25,25);
    QRegion region(rect, QRegion::Ellipse);
    ui->column_1->setMask(region);
    ui->column_2->setMask(region);
    ui->column_3->setMask(region);
    ui->column_4->setMask(region);
    ui->column_5->setMask(region);
    ui->column_6->setMask(region);
    ui->column_7->setMask(region);

    ui->column_1->setStyleSheet("background-color: trasnparent");
    ui->column_2->setStyleSheet("background-color: trasnparent");
    ui->column_3->setStyleSheet("background-color: trasnparent");
    ui->column_4->setStyleSheet("background-color: trasnparent");
    ui->column_5->setStyleSheet("background-color: trasnparent");
    ui->column_6->setStyleSheet("background-color: trasnparent");
    ui->column_7->setStyleSheet("background-color: trasnparent");
}

MainBoard::~MainBoard()
{
    delete ui;
}


////////////////////////////////////////////////// MAIN MENU //////////////////////////////////////////////////


void MainBoard::on_doneButton_clicked()
{
    unsigned int name_sentry = 0;
    unsigned int color_sentry = 0;
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
    // emitted functions return bool if name for player is valid or not
    // converted to int and added to sentries
    for (int i : player_vec)
    {
        switch (i) {
        // case player 1 enabled
        case 0:
            name_sentry += int(emit on_p1_name_editingFinished());
            color_sentry += int(emit on_p1_color_editingFinished());
            break;
        // case player 2 enabled
        case 1:
            name_sentry += int(emit on_p2_name_editingFinished());
            color_sentry += int(emit on_p2_color_editingFinished());
            break;
        // case player 3 enabled
        case 2:
            name_sentry += int(emit on_p3_name_editingFinished());
            color_sentry += int(emit on_p3_color_editingFinished());
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

    // if number of valid names != number of players
    else if (name_sentry != player_vec.size())
    {
        QMessageBox msgBox;
        msgBox.setText("Player names must be unique or not empty!");
        msgBox.exec();
        qDebug() << "Player names must be unique or not empty!";
        qDebug() << "vec size is " << int(player_vec.size());
        qDebug() << "Sentry is " << name_sentry;
    }

    else if (color_sentry != player_vec.size()) {
        // if any 2 players have the same color
        QMessageBox msgBox;
        msgBox.setText("Players must have unique colors!");
        msgBox.exec();
        qDebug() << "Players must have unique colors!";
        qDebug() << "vec size is " << int(player_vec.size());
        qDebug() << "Sentry is " << color_sentry;
    }

    else {

        // player objects are created when Done button is pressed

        //move to the game play screen -- form here access
                //board and shop
        ui->stackedWidget->setCurrentIndex(1);
        // set menu items visible
        ui->menuLeaderboard->setTitle("Leaderboard");
        ui->menuLeaderboard->setDisabled(false);
        ui->menuEnd_Game->setTitle("End Game");
        ui->menuEnd_Game->setDisabled(false);
        qDebug() << "Starting Game... Creating Player Objects...";
        Board* board = new Board;

        // create Player 1 object here
        if (ui->p1_comboBox->currentIndex() == 1) {
            Player* p1 = new Player(ui->p1_color->palette().color(QPalette::Button));
            qDebug() << "Adding Player 1...";

            // set player 1 name from ui->p1_name
            p1->setName(ui->p1_name->text());
            board->addPlayer(p1);
            emit send_p1_name(ui->p1_name->text());
        }

        // create Player 2 object here
        if (ui->p2_comboBox->currentIndex() == 1) {
            Player* p2 = new Player(ui->p2_color->palette().color(QPalette::Button));
            qDebug() << "Adding Player 2...";

            // set player 2 name from ui->p2_name
            p2->setName(ui->p2_name->text());

            board->addPlayer(p2);
            emit send_p2_name(ui->p2_name->text());

        }

        // create player 3 object here
        if (ui->p3_comboBox->currentIndex() == 1) {
            Player* p3 = new Player(ui->p3_color->palette().color(QPalette::Button));
            qDebug() << "Adding Player 3...";

            // set player 3 name from ui->p3_name
            p3->setName(ui->p3_name->text());

            board->addPlayer(p3);
            emit send_p3_name(ui->p3_name->text());

        }
        // set created board object pointer to be referenced by mainboard
        this->setBoard(board);

        // first person in vector's turn

        QString turn = board->getPlayer(0)->getName()+"'s turn";

        ui->playerTurnLabel->setText(turn);
        board_->set_curr_color(board->getPlayer(0)->getColor());

//        qDebug() << "Done.";
//        if (board->boardFull())
//            qDebug() << "Board is full";
        board_ = board;

//        playGame();
        emit send_rounds(4);

    }
}

bool MainBoard::on_p1_color_editingFinished() {
    qDebug() << "Player 1 color is " << ui->p1_color->palette().color(QPalette::Button);
    if (ui->p1_color->palette().color(QPalette::Button) == ui->p2_color->palette().color(QPalette::Button) || ui->p1_color->palette().color(QPalette::Button) == ui->p3_color->palette().color(QPalette::Button)) {
        qDebug() << "player 1 has same color as p2 or p3";
        return false;
    }
    else
        return true;
}

bool MainBoard::on_p2_color_editingFinished() {
    if (ui->p2_color->palette().color(QPalette::Button) == ui->p1_color->palette().color(QPalette::Button) || ui->p2_color->palette().color(QPalette::Button) == ui->p3_color->palette().color(QPalette::Button)) {
        qDebug() << "player 2 has same color as p1 or p3";
        return false;
    }
    else
        return true;
}

bool MainBoard::on_p3_color_editingFinished() {
    if (ui->p3_color->palette().color(QPalette::Button) == ui->p2_color->palette().color(QPalette::Button) || ui->p3_color->palette().color(QPalette::Button) == ui->p1_color->palette().color(QPalette::Button)) {
        qDebug() << "player 3 has same color as p2 or p1";
        return false;
    }
    else
        return true;
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

////////////////////////////////////////////////// GAMEPLAY //////////////////////////////////////////////////
//void MainBoard::on_column_1_hover(){
//    ui->column_1->setStyleSheet("QPushButton{background:black;}");
//}

void MainBoard::on_column_1_pressed()
{
    qDebug() << "column 1 pressed";
    QString qss = QString("background-color: %1").arg(board_->get_curr_color().name());
    ui->column_1->setStyleSheet(qss);
    ui->column_1->update();
}

void MainBoard::on_column_1_released()
{
    qDebug() << "column 1 released";
    ui->column_1->setStyleSheet("background-color: transparent");
    ui->column_1->update();
}

void MainBoard::on_column_2_pressed()
{
    qDebug() << "column 2 pressed";
    QString qss = QString("background-color: %1").arg(board_->get_curr_color().name());
    ui->column_2->setStyleSheet(qss);
    ui->column_2->update();
}

void MainBoard::on_column_2_released()
{
    qDebug() << "column 2 released";
    ui->column_2->setStyleSheet("background-color: transparent");
    ui->column_2->update();
}

void MainBoard::on_column_3_pressed()
{
    qDebug() << "column 3 pressed";
    QString qss = QString("background-color: %1").arg(board_->get_curr_color().name());
    ui->column_3->setStyleSheet(qss);
    ui->column_3->update();
}

void MainBoard::on_column_3_released()
{
    qDebug() << "column 3 released";
    ui->column_3->setStyleSheet("background-color: transparent");
    ui->column_3->update();
}

void MainBoard::on_column_4_pressed()
{
    qDebug() << "column 4 pressed";
    QString qss = QString("background-color: %1").arg(board_->get_curr_color().name());
    ui->column_4->setStyleSheet(qss);
    ui->column_4->update();
}

void MainBoard::on_column_4_released()
{
    qDebug() << "column 4 released";
    ui->column_4->setStyleSheet("background-color: transparent");
    ui->column_4->update();
}

void MainBoard::on_column_5_pressed()
{
    qDebug() << "column 5 pressed";
    QString qss = QString("background-color: %1").arg(board_->get_curr_color().name());
    ui->column_5->setStyleSheet(qss);
    ui->column_5->update();
}

void MainBoard::on_column_5_released()
{
    qDebug() << "column 5 released";
    ui->column_5->setStyleSheet("background-color: transparent");
    ui->column_5->update();
}

void MainBoard::on_column_6_pressed()
{
    qDebug() << "column 6 pressed";
    QString qss = QString("background-color: %1").arg(board_->get_curr_color().name());
    ui->column_6->setStyleSheet(qss);
    ui->column_6->update();
}

void MainBoard::on_column_6_released()
{
    qDebug() << "column 6 released";
    ui->column_6->setStyleSheet("background-color: transparent");
    ui->column_6->update();
}

void MainBoard::on_column_7_pressed()
{
    qDebug() << "column 7 pressed";
    QString qss = QString("background-color: %1").arg(board_->get_curr_color().name());
    ui->column_7->setStyleSheet(qss);
    ui->column_7->update();
}

void MainBoard::on_column_7_released()
{
    qDebug() << "column 7 released";
    ui->column_7->setStyleSheet("background-color: transparent");
    ui->column_7->update();
}

void MainBoard::playGame(){
    rounds_ = 2*(this->board_->getNumPlayers());//4 rounds for 2 players, 6 for 3 players

    for(int i = 0; i<rounds_; i++){
        //update rounds label
        emit send_rounds(i);

        // each player will take their turn
        bool out = false;
        while(out == false){
            for(int j=0; j<board_->getNumPlayers(); j++){
                Player *curr_p = this->board_->getPlayer(j);

                //update turn label
                QString turn = curr_p->getName()+"'s turn";
                ui->playerTurnLabel->setText(turn);

                board_->set_curr_color(curr_p->getColor());

//                this->board_->takeTurn(curr_p); //player j will take their turn
                qDebug() << "Turn taken";
                //then we will check if they are winning
                Chip curr_chip(curr_p->getColor());

                //if current player wins, we move on to the shop
//                if(board_->checkWinner(&curr_chip)){
//                    QMessageBox msgBox;
//                    msgBox.setText("%s has won this round!");
//                    msgBox.exec();
//                    curr_p->roundWon();
//                    curr_p->addPoints(10); //winner gets 10 points, other players get 5
//                    if(j==0){//player 1 won
//                        this->board_->getPlayer(1)->addPoints(5); //p2 gets 5 points
//                        this->board_->getPlayer(2)->addPoints(5); //p3 gets 5 points
//                    }else if(j==1){//player 2 won
//                        this->board_->getPlayer(0)->addPoints(5); //p1 gets 5 points
//                        this->board_->getPlayer(2)->addPoints(5); //p3 gets 5 points
//                    }else{//player 3 won
//                        this->board_->getPlayer(0)->addPoints(5); //p1 gets 5 points
//                        this->board_->getPlayer(1)->addPoints(5); //p2 gets 5 points
//                    }
//                    out = true;
//                    break;//break out of looping through players
//                }

                //if there is no winner, check if the board is full
                out = board_->boardFull();
                if(out){
                    QMessageBox msgBox2;
                    msgBox2.setText("Board is full; round over!");
                    msgBox2.exec();
                }

            }
        }


        //at the end of the round, proceed to shopping
        ui->stackedWidget->setCurrentIndex(2);
        // set menu items invisible
        ui->menuLeaderboard->setTitle("");
        ui->menuLeaderboard->setDisabled(true);
        ui->menuEnd_Game->setTitle("");
        ui->menuEnd_Game->setDisabled(true);
        qDebug() << "Switching to shopping screen.";

        // each player gets to shop
        for(int h=0; h<board_->getNumPlayers(); h++){

            Player *p = this->board_->getPlayer(h);//get player
            int player_points = p->getPoints();
            //update player string label
            if(h == 0){//player 1 is shopping
                QString str = "P1: " + QString::number(player_points) + "pts [shopping]";
                ui->p1_pts->setText(str);
                QString str2 = "P2: " + QString::number(this->board_->getPlayer(1)->getPoints()) + "pts";
                ui->p2_pts->setText(str2);
                QString str3 = "P3: " + QString::number(this->board_->getPlayer(2)->getPoints()) + "pts";
                ui->p3_pts->setText(str3);

            }else if(h == 1){//player 2 is shopping
                QString str = "P1: " + QString::number(this->board_->getPlayer(0)->getPoints()) + "pts";
                ui->p1_pts->setText(str);
                QString str2 = "P2: " + QString::number(player_points) + "pts [shopping]";
                ui->p2_pts->setText(str2);
                QString str3 = "P3: " + QString::number(this->board_->getPlayer(2)->getPoints()) + "pts";
                ui->p3_pts->setText(str3);
            }else{
                QString str = "P1: " + QString::number(this->board_->getPlayer(0)->getPoints()) + "pts";
                ui->p1_pts->setText(str);
                QString str2 = "P2: " + QString::number(this->board_->getPlayer(1)->getPoints()) + "pts";
                ui->p2_pts->setText(str2);
                QString str3 = "P3: " + QString::number(player_points) + "pts [shopping]";
                ui->p3_pts->setText(str3);
            }
            //actual shopping/buying will be triggered by the buy button

            //wait for either buy button to continue onto the next shopper

        }
    //wait for next round button to continue onto next round

    }
}

////////////////////////////////////////////////// BOARD //////////////////////////////////////////////////
// Use QGridLayout

//void MainBoard::on_board_endGameButton_clicked()
//{
//    QMessageBox msgBox;
//    msgBox.setWindowTitle("Quitting Game");
//    msgBox.setText("Are you sure you want to exit?");
//    msgBox.setStandardButtons(QMessageBox::Yes);
//    msgBox.addButton(QMessageBox::No);
//    msgBox.setDefaultButton(QMessageBox::No);
//    if(msgBox.exec() == QMessageBox::Yes)
//    {
//        qDebug() << "Ending current game session...";
//        //go back to home screen
//        ui->stackedWidget->setCurrentIndex(0);
//        // set menu items invisible
//        ui->menuLeaderboard->setTitle("");
//        ui->menuLeaderboard->setDisabled(true);
//        ui->menuEnd_Game->setTitle("");
//        ui->menuEnd_Game->setDisabled(true);
//        delete this->getBoardRef();
//    }
//}

void MainBoard::on_board_shopButton_clicked()
{
    //the round is over, we shop
    ui->stackedWidget->setCurrentIndex(2);
    // set menu items invisible
    ui->menuLeaderboard->setTitle("");
    ui->menuLeaderboard->setDisabled(true);
    ui->menuEnd_Game->setTitle("");
    ui->menuEnd_Game->setDisabled(true);
    qDebug() << "Switching to shopping screen.";
    //enable buttons again -- will be enabled when we move from player to player shopping
    ui->buy_item->setEnabled(true);
    ui->buy_upgrade->setEnabled(true);
}



////////////////////////////////////////////////// STORE //////////////////////////////////////////////////


//void MainBoard::on_store_endGameButton_clicked()
//{
//    QMessageBox msgBox;
//    msgBox.setWindowTitle("Quitting Game");
//    msgBox.setText("Are you sure you want to exit?");
//    msgBox.setStandardButtons(QMessageBox::Yes);
//    msgBox.addButton(QMessageBox::No);
//    msgBox.setDefaultButton(QMessageBox::No);
//    if(msgBox.exec() == QMessageBox::Yes)
//    {
//        qDebug() << "Ending current game session...";
//        //go back to home screen
//        ui->stackedWidget->setCurrentIndex(0);
//        // set menu items invisible
//        ui->menuLeaderboard->setTitle("");
//        ui->menuLeaderboard->setDisabled(true);
//        ui->menuEnd_Game->setTitle("");
//        ui->menuEnd_Game->setDisabled(true);
//        delete this->getBoardRef();
//    }
//}

void MainBoard::on_store_nextRoundButton_clicked()
{
    //after shopping, next round
    ui->stackedWidget->setCurrentIndex(1);
    // set menu items visible
    ui->menuLeaderboard->setTitle("Leaderboard");
    ui->menuLeaderboard->setDisabled(false);
    ui->menuEnd_Game->setTitle("End Game");
    ui->menuEnd_Game->setDisabled(false);
    qDebug() << "Shopping finished... Starting next round...";
}

void MainBoard::on_buy_upgrade_clicked()
{
    //get the name/cost of the upgrade
    qDebug() << "Upgrade Purchased";
    QMessageBox msgBox;
    msgBox.setText("Upgrade ____ purchase for ___ pts [Player _]");
    msgBox.exec();
    //disable further purchases for thisplayer
    ui->buy_item->setEnabled(false);
    ui->buy_upgrade->setEnabled(false);
}

void MainBoard::on_buy_item_clicked()
{
    //get the name/cost of the item
    qDebug() << "Item Purchased";
    QMessageBox msgBox;
    msgBox.setText("Item ____ purchase for ___ pts [Player _]");
    msgBox.exec();
    //disable further purchases for thisplayer
    ui->buy_item->setEnabled(false);
    ui->buy_upgrade->setEnabled(false);
}


////////////////////////////////////////////////// LEADERBOARD //////////////////////////////////////////////////

void MainBoard::recieve_clear_signal() {
    this->setStatsDisplayShow(false);

}

void MainBoard::on_actionLeaderboard_triggered()
{
    // open leaderboard window
    if (this->getStatsDisplayShow() == false) {
        this->getStatsDisplayPtr()->show();
        this->setStatsDisplayShow(true);
    }
}

void MainBoard::on_actionEnd_Game_triggered()
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
        // set menu items invisible
        ui->menuLeaderboard->setTitle("");
        ui->menuLeaderboard->setDisabled(true);
        ui->menuEnd_Game->setTitle("");
        ui->menuEnd_Game->setDisabled(true);
        delete this->getBoardRef();
    }
    // clear leaderboard

    emit clear_leaderboard();
}
