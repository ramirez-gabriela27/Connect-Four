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

enum class ShopItem{ RemoveOpponentPiece, ExtraTurn, SwitchPiece };
enum class ShopUpgrades { ExtraFivePts, DoublePts, TriplePts };

class Player {

public:
    Player(QColor color) {color_ = color; points_ = 0;};

    // getters and setters here
    void setPoints(int points) {points_ = points;};
    void setName(QString name) {name_ = name;};
    QColor getColor() {return color_;};
    int getPoints() {return points_;};
    QString getName() {return name_;};


private:
    int points_;
    QString name_;
    QColor color_;
    std::vector<std::string> player_inventory_;
};

////////////////////////////////////////////////////////////////////////////

class Board {
    // board object. Only one per game.
public:
    Board();
    Player* getPlayer(int i){return players_[i];};
    void addPlayer(Player* player) {players_.push_back(player);};
private:
    std::vector<Player*> players_;
    //std::vector<std::vector<Cell*>> cells_;
    // store is a map that uses item name as key, and maps to pair of item count and item cost
    std::map<std::string,std::pair<int,int>> store_;
};
