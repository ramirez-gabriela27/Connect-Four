#include "mainboard.h"
#include "ui_mainboard.h"
#include <QColor>
#include <QColorDialog>
#include <QMessageBox>
#include <QRegion>
#include <stdexcept>

MainBoard::MainBoard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainBoard)
{
    ui->setupUi(this);
    this->setWindowTitle("Connect Four");
//    QGraphicsView * view = ui->grid_view;
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
    connect(this, &MainBoard::update_p1_name, sd, &statsDisplay::recieve_p1_name);
    connect(this, &MainBoard::update_p2_name, sd, &statsDisplay::recieve_p2_name);
    connect(this, &MainBoard::update_p3_name, sd, &statsDisplay::recieve_p3_name);

    connect(this, &MainBoard::update_p1_points, sd, &statsDisplay::recieve_p1_points);
    connect(this, &MainBoard::update_p2_points, sd, &statsDisplay::recieve_p2_points);
    connect(this, &MainBoard::update_p3_points, sd, &statsDisplay::recieve_p3_points);

    connect(this, &MainBoard::clear_leaderboard, sd, &statsDisplay::clear_leaderboard);

    connect(this, &MainBoard::buy_signal, this, &MainBoard::recieve_buy_signal);

    connect(this, &MainBoard::chip_dropped, this, &MainBoard::recieve_dropped);

    QRect rect(20,17,40,40);
    QRegion region(rect, QRegion::Ellipse);
    ui->column_1->setMask(region);
    ui->column_2->setMask(region);
    ui->column_3->setMask(region);
    ui->column_4->setMask(region);
    ui->column_5->setMask(region);
    ui->column_6->setMask(region);
    ui->column_7->setMask(region);

    turn_number_ = 0;

    populateBoard();
}

MainBoard::~MainBoard()
{
    delete ui;
}


///////////////////////////////////////////////////////////////////// MAIN MENU /////////////////////////////////////////////////////////////////////


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
            name_sentry += int(on_p1_name_editingFinished());
            color_sentry += int(on_p1_color_editingFinished());
            break;
        // case player 2 enabled
        case 1:
            name_sentry += int(on_p2_name_editingFinished());
            color_sentry += int(on_p2_color_editingFinished());
            break;
        // case player 3 enabled
        case 2:
            name_sentry += int(on_p3_name_editingFinished());
            color_sentry += int(on_p3_color_editingFinished());
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
//            p1->addPoints(19);
            // set player 1 name from ui->p1_name
            p1->setName(ui->p1_name->text());
            p1->setID(1); // player 1
            board->addPlayer(p1);
            emit update_p1_name(ui->p1_name->text());
            emit update_p1_points(p1->getPoints());
        }

        // create Player 2 object here
        if (ui->p2_comboBox->currentIndex() == 1) {
            Player* p2 = new Player(ui->p2_color->palette().color(QPalette::Button));
            qDebug() << "Adding Player 2...";

            // set player 2 name from ui->p2_name
            p2->setName(ui->p2_name->text());
            p2->setID(2); // player 2
            board->addPlayer(p2);
            emit update_p2_name(ui->p2_name->text());
            emit update_p2_points(p2->getPoints());
        }

        // create player 3 object here
        if (ui->p3_comboBox->currentIndex() == 1) {
            Player* p3 = new Player(ui->p3_color->palette().color(QPalette::Button));
            qDebug() << "Adding Player 3...";

            // set player 3 name from ui->p3_name
            p3->setName(ui->p3_name->text());
            p3->setID(3); // player 3
            board->addPlayer(p3);
            emit update_p3_name(ui->p3_name->text());
            qDebug() << "Player 3 points: " << p3->getPoints();
            emit update_p3_points(p3->getPoints());
        }
        // set created board object pointer to be referenced by mainboard
        this->setBoard(board);

        // first person in vector's turn

        QString turn = board->getPlayer(0)->getName()+"'s turn";
        ui->playerTurnLabel->setText(turn);
        board_->set_curr_color(board->getPlayer(0)->getColor());
        board_->set_curr_player(board->getPlayer(0));

//        qDebug() << "Done.";
//        if (board->boardFull())
//            qDebug() << "Board is full";
        board_ = board;

        update_curr_player_color();
        round_tracker_ = 0;
        rounds_ = 2*board_->getNumPlayers();
        emit send_rounds(2*board_->getNumPlayers());
        populateBoard();

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
        on_p1_name_editingFinished();
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
        on_p2_name_editingFinished();
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
        on_p3_name_editingFinished();
    }
    else if (index == 0)
    {
        ui->p3_name->setEnabled(false);
        ui->doneButton->setEnabled(true);
    }
}

///////////////////////////////////////////////////////////////////// GAMEPLAY /////////////////////////////////////////////////////////////////////
void MainBoard::update_curr_player_color() {
    QString qss = QString("background-color: %1").arg(board_->get_curr_color().name());
    ui->column_1->setStyleSheet(qss);
    ui->column_2->setStyleSheet(qss);
    ui->column_3->setStyleSheet(qss);
    ui->column_4->setStyleSheet(qss);
    ui->column_5->setStyleSheet(qss);
    ui->column_6->setStyleSheet(qss);
    ui->column_7->setStyleSheet(qss);
    update();
}

void MainBoard::next_turn() {

    if(round_tracker_ == rounds_){
        int min_rounds_won = 0;
        QString winner_name = "no one!";
        //find the game winner
        for(int p = 0; p < board_->getNumPlayers(); p++){
            if(min_rounds_won < board_->getPlayer(p)->getRoundsWon()){
                min_rounds_won = board_->getPlayer(p)->getRoundsWon();
                winner_name = board_->getPlayer(p)->getName();
            }
        }
        QString msg = "All rounds completed. The winner is: " + winner_name;
        QMessageBox msgBox;
        msgBox.setWindowTitle("Game Over");
        msgBox.setText(msg);
        if(msgBox.exec())
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
            round_tracker_ = 0;
            return;
        }
    }

    if (round_tracker_ + 1 == 4)
        ui->tracker->setText("Final Round!");
    else
        ui->tracker->setText("Round #" + QString::number(round_tracker_ + 1));

    int turn_ahead = turn_number_ + 1;
    if (turn_ahead >= board_->getNumPlayers()) {
        turn_number_ = 0;
    }
    else {
        turn_number_++;
    }
    // update turn label
    qDebug() << "Turn number" << turn_number_;
    QString turn = board_->getPlayer(turn_number_)->getName()+"'s turn";

    ui->playerTurnLabel->setText(turn);
    board_->set_curr_color(board_->getPlayer(turn_number_)->getColor());
    board_->set_curr_player(board_->getPlayer(turn_number_));

    // update board colors
    update_curr_player_color();

    if(board_->columnIsFull(0))
        ui->column_1->setStyleSheet("background-color: transparent");
    if(board_->columnIsFull(1))
        ui->column_2->setStyleSheet("background-color: transparent");
    if(board_->columnIsFull(2))
        ui->column_3->setStyleSheet("background-color: transparent");
    if(board_->columnIsFull(3))
        ui->column_4->setStyleSheet("background-color: transparent");
    if(board_->columnIsFull(4))
        ui->column_5->setStyleSheet("background-color: transparent");
    if(board_->columnIsFull(5))
        ui->column_6->setStyleSheet("background-color: transparent");
    if(board_->columnIsFull(6))
        ui->column_7->setStyleSheet("background-color: transparent");

}

// tests if is valid drop and if winner/draw
int MainBoard::recieve_dropped(int col) {
    if (!board_->columnIsFull(col)) {
        qDebug() << "Dropping chip on column "  << col + 1 << " for player " << board_->get_curr_player()->getName() << "....";
        int row = board_->getTopChip(col);

        qDebug() << "Top available chip at (" << row << "," << col << ")";
        // update color of chip in board_->chips_ to curr_player_color

        Chip* c = new Chip(board_->getPlayer(turn_number_)->getColor());
        c->set_x(col);
        c->set_y(row);
        qDebug() << "Column is" << col;
        qDebug() << "Row is " << row;
        board_->updateChipColor(col, row, board_->getPlayer(turn_number_)->getColor());
        //update(); ->gotta ge the grid to display and update still
        Chip* temp = new Chip(board_->getPlayer(turn_number_)->getColor());
        temp->set_x(col);
        temp->set_y(BOARD_HEIGHT-row-1);
        scene->addItem(temp);

        // update board display
        scene->update();
        update();

        // if winner is detected
        if (board_->checkWinner(c)){
            qDebug() << "Winner detected!!";
            board_->resetBoard();
            board_->get_curr_player()->addPoints(5); //winner (current player) gets 5 more, 10 total

            for(unsigned int i = 0; i < board_->get_player_vec().size(); i++){
                Player* p = board_->get_player_vec()[i];
                p->addPoints(5); //every player gets 5 pts
                switch(p->getID()) {
                case 1:
                    emit update_p1_points(p->getPoints());
                    break;
                case 2:
                    emit update_p2_points(p->getPoints());
                    break;
                case 3:
                    emit update_p3_points(p->getPoints());
                    break;
                default: throw std::range_error("player ID does not exist");

                }
            }
            board_->get_curr_player()->roundWon();

            QMessageBox msgBox;
            msgBox.setText(board_->get_curr_player()->getName() + " has won this round!");
            msgBox.exec();
            populateBoard();
            on_board_shopButton_clicked();

            //show leaderboard



            //round incremented by shop (next round button clicked)
            //proceed to next round

        }else if(board_->isFull()){
            qDebug() << "Board full returned true";
            populateBoard();

            for(unsigned int i = 0; i < board_->get_player_vec().size(); i++){
                board_->get_player_vec()[i]->addPoints(5); //every player gets 5 pts
            }

            QMessageBox msgBox;
            msgBox.setText("This round ends in a draw");
            msgBox.exec();
            board_->resetBoard();

            on_board_shopButton_clicked();
            //round incremented by shop (next round button clicked)
            //proceed to next round
            return 1;
        }

        qDebug() << "Can place in column";

        next_turn();
        return 0; // return code for all is well

    }
    else {
        // this is the case when column is full but game is not over yet
        qDebug() << "Column is full... can't place chip here. ";
        return 2;
    }
}

///////////////////////////////////////////////////////////////////// BOARD /////////////////////////////////////////////////////////////////////
// Populates the GUI with colored grid
void MainBoard::populateBoard() {
    // coords for upper left corner of game board
//    board_->paintBoard(painter, opti
//    int x_origin = 40;
//    int y_origin = 100;
    QColor c = CHIP_DEFAULT_COLOR;

    for (int h = 0; h < BOARD_HEIGHT; h++) {
        for (int w = 0; w < BOARD_WIDTH; w++) {
            Chip* chip = new Chip(c); // override color for testing
            chip->set_x(w);
            chip->set_y(h);
            scene->addItem(chip);
        }
    }

}

void MainBoard::on_board_shopButton_clicked()
{
    //the round is over, we shop
    ui->stackedWidget->setCurrentIndex(2);
    // set menu items invisible
    ui->menuLeaderboard->setTitle("");
    ui->menuLeaderboard->setDisabled(true);
    ui->menuEnd_Game->setTitle("");
    ui->menuEnd_Game->setDisabled(true);
    qDebug() << "Shopping Button clicked!";
    //enable buttons again -- will be enabled when we move from player to player shopping
    ui->buy_item->setEnabled(true);
    ui->buy_upgrade->setEnabled(true);
}

void MainBoard::on_column_1_clicked()
{
    qDebug() << "column 1 clicked";
        ui->column_1->setStyleSheet("background-color: transparent");
        //drop chip on this column
        //this->board_->drop_chip(0);
        ui->column_1->update();

        //emit signal that chip is dropped
//        Player* curr_p = board_->get_curr_player();
//        Chip curr_chip(curr_p->getColor());
        emit chip_dropped(0);
}

void MainBoard::on_column_2_clicked()
{
    qDebug() << "column 2 clicked";
    ui->column_2->setStyleSheet("background-color: transparent");
    //drop chip on this column
    //this->board_->drop_chip(1);
    ui->column_2->update();

    //emit signal that chip is dropped
//    Player* curr_p = board_->get_curr_player();
//    Chip curr_chip(curr_p->getColor());
    emit chip_dropped(1);
}

void MainBoard::on_column_3_clicked()
{
    qDebug() << "column 3 clicked";
    ui->column_3->setStyleSheet("background-color: transparent");
    //drop chip on this column
    //this->board_->drop_chip(2);
    ui->column_3->update();

    //emit signal that chip is dropped
//    Player* curr_p = board_->get_curr_player();
//    Chip curr_chip(curr_p->getColor());
    emit chip_dropped(2);
}

void MainBoard::on_column_4_clicked()
{
    qDebug() << "column 4 clicked";
    ui->column_4->setStyleSheet("background-color: transparent");
    //drop chip on this column
    //this->board_->drop_chip(3);
    ui->column_4->update();

    //emit signal that chip is dropped
//    Player* curr_p = board_->get_curr_player();
//    Chip curr_chip(curr_p->getColor());
    emit chip_dropped(3);
}

void MainBoard::on_column_5_clicked()
{
    qDebug() << "column 5 clicked";
    ui->column_5->setStyleSheet("background-color: transparent");
    //drop chip on this column
    //this->board_->drop_chip(4);
    ui->column_5->update();

    //emit signal that chip is dropped
//    Player* curr_p = board_->get_curr_player();
//    Chip curr_chip(curr_p->getColor());
    emit chip_dropped(4);
}

void MainBoard::on_column_6_clicked()
{
    qDebug() << "column 6 clicked";
    ui->column_6->setStyleSheet("background-color: transparent");
    //drop chip on this column
    //this->board_->drop_chip(5);
    ui->column_6->update();

    //emit signal that chip is dropped
//    Player* curr_p = board_->get_curr_player();
//    Chip curr_chip(curr_p->getColor());
    emit chip_dropped(5);
}

void MainBoard::on_column_7_clicked()
{
    qDebug() << "column 7 clicked";
    ui->column_7->setStyleSheet("background-color: transparent");
    //drop chip on this column
    //this->board_->drop_chip(6);
    ui->column_7->update();

    //emit signal that chip is dropped
//    Player* curr_p = board_->get_curr_player();
//    Chip curr_chip(curr_p->getColor());
    emit chip_dropped(6);
}

///////////////////////////////////////////////////////////////////// STORE /////////////////////////////////////////////////////////////////////


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

    round_tracker_++; //increment round - start at 0
    qDebug() << "Round # " << round_tracker_ + 1;

    next_turn();//go on to next turn
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
    emit buy_signal();
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
    emit buy_signal();
}

int MainBoard::recieve_buy_signal() {
    qDebug() << "Buy Signal Recieved!";
    return 1;
}

///////////////////////////////////////////////////////////////////// LEADERBOARD /////////////////////////////////////////////////////////////////////

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



void MainBoard::on_radioButton_3_clicked()
{
    //upgrade 1;
    ui->buy_upgrade->setDisabled(true);
    QMessageBox msgBox;
    msgBox.setText("You bought upgrade 1!");
    msgBox.exec();

    ui->p1_pts->setText("P1");
    ui->p2_pts->setText("P2[Shopping]");
    ui->p3_pts->setText("P3");
}

void MainBoard::on_radioButton_2_clicked()
{
    //upgrade 2;
    ui->buy_upgrade->setDisabled(true);
    QMessageBox msgBox;
    msgBox.setText("You bought upgrade 2!");
    msgBox.exec();

    ui->p1_pts->setText("P1");
    ui->p2_pts->setText("P2");
    ui->p3_pts->setText("P3");
}

void MainBoard::on_radioButton_clicked()
{
    //upgrade 2;
    ui->buy_upgrade->setDisabled(true);
    QMessageBox msgBox;
    msgBox.setText("You bought upgrade 3!");
    msgBox.exec();

    ui->p1_pts->setText("P1");
    ui->p2_pts->setText("P2");
    ui->p3_pts->setText("P3");
}
