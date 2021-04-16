#ifndef GAME_H
#define GAME_H

#endif // GAME_H

#include <QColor>

struct Store {
    // put cost of items here
};

class Player {

public:
    Player(QColor color) {color_ = color; points_ = 0;};
//    ~Player();

    // getters and setters here



private:
    int points_;
    QColor color_;

};
