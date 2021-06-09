#ifndef GAME_H
#define GAME_H

#endif // GAME_H
#include <QtDebug>
#include <QColor>
#include <vector>
#include <map>
#include <QPainter>
#include <QGraphicsItem>
#define BOARD_WIDTH 7
#define BOARD_HEIGHT 6
#define CHIP_DEFAULT_COLOR QColor(255, 255, 255)

enum class stock{ RemoveOpponentPiece, ExtraTurn, SwitchPiece, ExtraFivePts, DoublePts, TriplePts };

class Chip : public QGraphicsItem{

public:
    Chip(QColor color){ color_ = color;} ;

    void set_x(int x){x_coord_ = x;};
    void set_y(int y){y_coord_ = y;};

    int get_x()const{return  x_coord_;};
    int get_y()const{return y_coord_;};

    QColor get_color(){return color_;};
    void set_color(QColor c){color_ = c;};
    QRectF boundingRect() const override;
    // called by Qt to actually display the point
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *item, QWidget *widget) override;


private:
    QColor color_;
    int x_coord_;
    int y_coord_;
};

////////////////////////////////////////////////////////////////////////////

class Player {

public:
    Player(QColor color) {color_ = color; points_ = 0; chip_count_ = 21; rounds_won_ =0;};

    // setters
    void addPoints(int points) {points_ += points;};
    void setName(QString name) {name_ = name;};
    void addItem(stock item) {player_inventory_.push_back(item);};
    void setID(int id) {player_id_ = id;};

    // getters
    QColor getColor() {return color_;};
    int getPoints() {return points_;};
    QString getName() {return name_;};
    std::vector<stock> getInventory() {return player_inventory_;};
    int getChipCount() {return chip_count_;};
    int getRoundsWon() {return rounds_won_;};
    int getID() {return player_id_;};

    //functions
    void useItem(stock item);
    void buyItem(stock item);
    void roundWon(){rounds_won_++;};

private:
    int player_id_;
    int points_;
    QString name_;
    QColor color_;
    int chip_count_;
    int rounds_won_;
    std::vector<stock> player_inventory_;
};

////////////////////////////////////////////////////////////////////////////

class Board {
    // board object. Only one per game.
public:
    Board();
    Player* getPlayer(int i){return players_[i];};
    int getNumPlayers(){return players_.size();};
    void addPlayer(Player* player) {players_.push_back(player);};
//    void drop_chip(int column); //update the bord as well
    bool checkWinner(Chip *c);
    void payoutPlayers();
    bool isFull();
    std::vector<std::vector<Chip*>> getBoard(){return chips_;};
    void set_curr_color(QColor c){curr_color_ = c;};
    QColor get_curr_color(){return curr_color_;};
    void set_curr_player(Player* p){curr_player_ = p;};
    Player* get_curr_player(){return curr_player_;};
    std::vector<Player*> get_player_vec() {return players_;};
    bool columnIsFull(int col);
    int getTopChip(int col);
    void updateChipColor(int x, int y, QColor c);

    void resetBoard();

private:
    QColor curr_color_;
    Player* curr_player_;
    //board is a grid of cells, 2d vactor
    std::vector<std::vector<Chip*>> chips_;
    std::vector<Player*> players_;
    // store is a map that uses item name as key, and maps to pair of item count and item cost
    std::map<stock,std::pair<int,int>> store_;

};
