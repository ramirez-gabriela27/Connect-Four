#ifndef GAME_H
#define GAME_H

#endif // GAME_H

#include <QColor>
#include <vector>
#include <map>



class Player {

public:
    Player(QColor color) {color_ = color; points_ = 0;};

    // getters and setters here



private:
    int points_;
    QString name_;
    QColor color_;

};

class Cell {
    // cell object. Populates the 6x7 board grid.
    // Ideally would be placed using a QGridLayout
public:
    void setCurrColor(QColor c) {curr_color_ = c;};

private:
    QColor curr_color_;

};

class Board {
    // board object. Only one per game.
public:
    Board(){};
    Player* getPlayer(int i){return players_[i];};
    void addPlayer(Player* player) {players_.push_back(player);};
private:
    std::vector<Player*> players_;
    std::vector<std::vector<Cell*>> cells_;
    // store is a map that uses item name as key, and maps to pair of item count and item cost
    std::map<std::string,std::pair<int,int>> store_;
};
