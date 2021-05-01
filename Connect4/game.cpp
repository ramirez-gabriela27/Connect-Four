#include "game.h"
#include <QMessageBox>

Board::Board() {
    qDebug() << "Initializing board with chips of white color...";
    for (int h = 0; h < BOARD_HEIGHT; h++) {
        std::vector<Chip*> rows_;
        for (int w = 0; w < BOARD_WIDTH; w++) {

            //with the background color being white, white chips are created and thrown in the grid
            Chip c(QColor(255, 255, 255));
            rows_.push_back(&c);
        }
        chips_.push_back(rows_);
    }
    qDebug() << "Done.";
}

void Board::takeTurn(Player* player){ //update the bord as well
    if(player->getChipCount() <= 0){//if player has no chips, they can't play
        QMessageBox msgBox;
        msgBox.setText("You're out of chips!");
        msgBox.exec();
    }else{//if they have chips still, create one and drip it into the grid in the location they chose
        //QColor c = player->getcolor();

        //player clicks on location on grid displayed (above they column they want to drop in)

        //the chip is now updated from the background color to the color they want
    }
}

//check Horizontal win
bool check_horizontal_combo(int x, int y, QColor c, std::vector<std::vector<Chip*>> board){
   int score = 1;
   int count = 1;

   while((x+count >= 0) && (x+count < BOARD_WIDTH)){
      if (board[y][x+count]->get_color() == c){//check left
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   count = 1;
   while((x-count < BOARD_WIDTH) && (x-count >=0)){
      if (board[y][x-count]->get_color() == c){//Check Right
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   if (score == 4) return true;
   else return false;
}
//check Vertical win
bool check_vertical_combo(int x, int y, QColor c, std::vector<std::vector<Chip*>> board){
   int score = 1;
   int count = 1;

   while(y+count >= 0 && y+count < BOARD_HEIGHT){
      if (board[y+count][x]->get_color() == c){//Check Down
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   if (score == 4) return true;
   else return false;
}
//check horizontal win (SW -> NE diagonal)
bool check_diagonal_combo_SW_NE(int x, int y, QColor c, std::vector<std::vector<Chip*>> board){
   int score = 1;
   int count = 1;

   while((y-count >= 0) && (x+count < BOARD_WIDTH)){
      if (board[y-count][x+count]->get_color() == c){//Check SW to NE
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   count = 1;
   while((y+count < BOARD_HEIGHT) && (x-count >=0)){
      if (board[y+count][x-count]->get_color() == c){//Check NE to SW
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   if (score == 4) return true;
   else return false;
}
//check horizontal win (NW -> SE diagonal)
bool check_diagonal_combo_NW_SE(int x, int y, QColor c, std::vector<std::vector<Chip*>> board){
   int score = 1;
   int count = 1;

   while((y+count >= 0) && (x+count < BOARD_WIDTH)){
      if (board[y+count][x+count]->get_color() == c){//Check NW to SE
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   count = 1;
   while((y-count < BOARD_HEIGHT) && (x-count >=0)){
      if (board[y-count][x-count]->get_color() == c){//Check SE to NW
         score++;
         count++;
      }else break;  //If no combo is detected break from the loop
   }

   if (score == 4) return true;
   else return false;
}
//resources for checking for winner: https://gummianime.tripod.com/tutorials/connect4.txt
bool Board::checkWinner(Chip *c){
    QColor color = c->get_color();
    int x = c->get_x();
    int y = c->get_y();

    //we will use the location and the color to find the winner
    if (check_horizontal_combo(x,y,color,chips_)) return true;
    else if (check_vertical_combo(x,y,color,chips_)) return true;
    else if (check_diagonal_combo_NW_SE(x,y,color,chips_)) return true;
    else if (check_diagonal_combo_SW_NE(x,y,color,chips_)) return true;
    else return false;

}
void Board::payoutPlayers(){


}
