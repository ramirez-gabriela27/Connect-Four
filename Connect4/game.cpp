#include "game.h"
#include <QMessageBox>
#define BLOCK_WIDTH 97.285
#define BLOCK_HEIGHT 73.5
Board::Board() {
    qDebug() << "Initializing board with chips of white color...";
    for (int h = 0; h < BOARD_WIDTH; h++) {
        std::vector<Chip*> cols_;
        for (int w = 0; w < BOARD_HEIGHT; w++) {

            //with the background color being white, white chips are created and thrown in the grid
            Chip* c = new Chip(CHIP_DEFAULT_COLOR);
            c->set_x(w);
            c->set_y(h);
            cols_.push_back(c);
        }
        chips_.push_back(cols_);
    }
    qDebug() << "Done.";
}

bool Board::isFull(){
    for (int h = 0; h < BOARD_WIDTH; h++) {
        for (int w = 0; w < BOARD_HEIGHT; w++) {
            if(chips_[h][w]->get_color() == CHIP_DEFAULT_COLOR) {
                qDebug() << "THERE'S STILL SPACE";
                return false;
            }
        }
    }
    qDebug() << "BOARD IS FULL";
    return true;
}

//check Horizontal win
bool check_horizontal_combo(int x, int y, QColor c, std::vector<std::vector<Chip*>> board){
   int score = 1;
   int count = 1;
    qDebug() << "Checking horizontal winner....";
   while((x+count >= 0) && (x+count < BOARD_WIDTH)){
      if (board[x+count][y]->get_color() == c){//check left
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   count = 1;
   while((x-count < BOARD_WIDTH) && (x-count >=0)){
      if (board[x-count][y]->get_color() == c){//Check Right
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   if (score == 4){
       qDebug() << "Horizontal winner found";
       return true;
   }else{
        qDebug() << "No horizontal win";
        return false;
   }
}

//check Vertical win
bool check_vertical_combo(int x, int y, QColor c, std::vector<std::vector<Chip*>> board){
   int score = 1;
   int count = 1;
    qDebug() << "Checking vertical winner....";
   while(y-count >=0){
      if (board[x][y-count]->get_color() == c){//Check down
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   if (score == 4){
       qDebug() << "Vertical winner found";
       return true;
   }else{
        qDebug() << "No vertical win";
        return false;
   }
}

//check horizontal win (SW -> NE diagonal)
bool check_diagonal_combo_SW_NE(int x, int y, QColor c, std::vector<std::vector<Chip*>> board){
   int score = 1;
   int count = 1;
    qDebug() << "Checking diag SW_NE winner....";
   while((y-count >= 0) && (x+count < BOARD_WIDTH)){
      if (board[x+count][y-count]->get_color() == c){//Check SW to NE
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   count = 1;
   while((y+count < BOARD_HEIGHT) && (x-count >=0)){
      if (board[x-count][y+count]->get_color() == c){//Check NE to SW
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   if (score == 4){
       qDebug() << "diagonal SW_NE winner found";
       return true;
   }else{
        qDebug() << "No diagonal SW_NE win";
        return false;
   }
}
//check horizontal win (NW -> SE diagonal)
bool check_diagonal_combo_NW_SE(int x, int y, QColor c, std::vector<std::vector<Chip*>> board){
   int score = 1;
   int count = 1;
    qDebug() << "Checking diag NW_SE winner....";
   while((y+count < BOARD_HEIGHT) && (x+count < BOARD_WIDTH)){


      if (board[x+count][y+count]->get_color() == c){//Check NW to SE
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   count = 1;
   while((y-count >= 0) && (x-count >=0)){
      if (board[x-count][y-count]->get_color() == c){//Check SE to NW
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   if (score == 4){
       qDebug() << "diagonal NW_SE winner found";
       return true;
   }else{
        qDebug() << "No diagonal NW_SE win";
        return false;
   }
}

//resources for checking for winner: https://gummianime.tripod.com/tutorials/connect4.txt
bool Board::checkWinner(Chip *c){
    QColor color = c->get_color();
    int x = c->get_x();
    int y = c->get_y();
    //we will use the location and the color to find the winner
    if (check_horizontal_combo(x,y,color,chips_)) {
        qDebug() << "horizontal combo true!";
        return true;
    }
    else if (check_vertical_combo(x,y,color,chips_)) {
        qDebug() << "vertical combo true!";
        return true;
    }
    else if (check_diagonal_combo_NW_SE(x,y,color,chips_)) {

        qDebug() << "NW_SE combo true!";
        return true;

    }
    else if (check_diagonal_combo_SW_NE(x,y,color,chips_)) {
        qDebug() << "SW NE combo true!";
        return true;

    }
    else return false;

}
void Board::payoutPlayers(){


}

int Board::getTopChip(int col){
    auto column = chips_[col];
    for(unsigned int i = 0; i < column.size(); i++){
        if(column[i]->get_color() == CHIP_DEFAULT_COLOR){
            return i;
        }
    }
    return -1;
}

// checks if the topmost chip is white
bool Board::columnIsFull(int col) {
    auto column = chips_[col]; // chips_ is 2d chip pointer vector
    // if topmost chip is not default color (aka if it is any player color)
    if (column[BOARD_HEIGHT-1]->get_color() != CHIP_DEFAULT_COLOR)
        return true;
    else
        return false;

}

void Board::updateChipColor(int w, int h, QColor c){
    qDebug() << "Changing color of chip at (" << w <<","<< h << ")";
    chips_[w][h]->set_color(c);
}

void Board::resetBoard(){
    for (int w = 0; w < BOARD_WIDTH; w++) {
        for (int h = 0; h < BOARD_HEIGHT; h++) {
            chips_[w][h]->set_color(CHIP_DEFAULT_COLOR);
        }
    }
    qDebug() << "\n BOARD RESET \n";
}

void Chip::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(widget);
    QBrush b = painter->brush();

    painter->setBrush(QBrush(color_));

    painter->drawRect(x_coord_*BLOCK_WIDTH, y_coord_*BLOCK_HEIGHT ,BLOCK_WIDTH, BLOCK_HEIGHT);
    painter->setBrush(b);
    // update the line for setBrush to be this

}

QRectF Chip::boundingRect() const
{
    return QRectF(this->get_x(),this->get_y(), 20, 20);
}
