#ifndef GAME_H
#define GAME_H

#endif // GAME_H

#include <QColor>

class Player {

public:
    Player(QColor color);
    ~Player();

    // getters and setters here



private:
    int points_;
    QColor color_;

};
