#ifndef GAME_H
#define GAME_H

#endif // GAME_H

#include <QColor>
#include <vector>

struct Store {
    // put item costs here
};

class Player {

public:
    Player(QColor color) {color_ = color; points_ = 0;};
//    ~Player();

    // getters and setters here



private:
    int points_;
    QString name_;
    QColor color_;

};



class Board {
    // board object. Only one per game.
public:
    Board();

    void addPlayer(Player* player) {players_.push_back(player);};
private:
    std::vector<Player*> players_;
};
