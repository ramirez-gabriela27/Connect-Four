#include "game.h"

Board::Board() {
    qDebug() << "Inserting new cells into board vector...";
    for (int h = 0; h < BOARD_HEIGHT; h++) {
        std::vector<Cell*> rows_;
        for (int w = 0; w < BOARD_WIDTH; w++) {
            Cell cell(w,h);
            rows_.push_back(&cell);
        }
        cells_.push_back(rows_);
    }
    qDebug() << "Done.";
}
