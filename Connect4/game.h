#ifndef GAME_H
#define GAME_H

#endif // GAME_H
#include <QtDebug>
#include <QColor>
#include <vector>
#include <map>

#define BOARD_WIDTH 7
#define BOARD_HEIGHT 6

//struct shopItem {
//  std::string name_;
//  std::string type_; //is it an upgrade or an item
//  double price_; //score value that it will cost
//};
// Items will be updated
enum class stock{ RemoveOpponentPiece, ExtraTurn, SwitchPiece, ExtraFivePts, DoublePts, TriplePts };

class Chip{
public:
    Chip(QColor color){ color_ = color;};

    void set_x(int x){x_coord_ = x;};
    void set_y(int y){y_coord_ = y;};

private:
    QColor color_;
    int x_coord_;
    int y_coord_;
};

////////////////////////////////////////////////////////////////////////////

class Player {

public:
    Player(QColor color) {color_ = color; points_ = 0;};

    // setters
    void setPoints(int points) {points_ = points;};
    void setName(QString name) {name_ = name;};
    void addItem(stock item) {player_inventory_.push_back(item);};

    // getters
    QColor getColor() {return color_;};
    int getPoints() {return points_;};
    QString getName() {return name_;};
    std::vector<stock> getInventory() {return player_inventory_;};

    //functions
    void useItem(stock item);
    void buyItem(stock item);

private:
    int points_;
    QString name_;
    QColor color_;
    std::vector<stock> player_inventory_;
    std::vector<Chip*> pieces_;
};

////////////////////////////////////////////////////////////////////////////

class Board {
    // board object. Only one per game.
public:
    Board();
    Player* getPlayer(int i){return players_[i];};
    void addPlayer(Player* player) {players_.push_back(player);};
    void takeTurn(); //update the bord as well
    bool checkWinner();
    void payoutPlayers();

private:
    std::vector<Player*> players_;
    //std::vector<std::vector<Cell*>> cells_;
    // store is a map that uses item name as key, and maps to pair of item count and item cost
    std::map<stock,std::pair<int,int>> store_;
};
