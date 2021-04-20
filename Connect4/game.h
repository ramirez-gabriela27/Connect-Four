#ifndef GAME_H
#define GAME_H

#endif // GAME_H

#include <QColor>
#include <vector>
#include <map>

#define BOARD_WIDTH 7
#define BOARD_HEIGHT 6

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

class Cell {
    // cell object. Populates the 6x7 board grid.
    // Ideally would be placed using a QGridLayout
public:
    Cell(int x, int y) {x_ = x; y_ = y; curr_color_ = Qt::blue;};
    void setCurrColor(QColor c) {curr_color_ = c;};

    void setXcoord(int x) {x_ = x;};

    void setYcoord(int y) {y_ = y;};

    int getXcoord() {return x_;};

    int getYcoord() {return y_;};

private:
    QColor curr_color_;
    int x_;
    int y_;
};

class Board {
    // board object. Only one per game.
public:
    Board();
    Player* getPlayer(int i){return players_[i];};
    void addPlayer(Player* player) {players_.push_back(player);};
private:
    std::vector<Player*> players_;
    std::vector<std::vector<Cell*>> cells_;
    // store is a map that uses item name as key, and maps to pair of item count and item cost
    std::map<std::string,std::pair<int,int>> store_;
};
