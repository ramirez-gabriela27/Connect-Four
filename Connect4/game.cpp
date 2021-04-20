#include "game.h"

Board::Board() {
    for (int h = 0; h < BOARD_HEIGHT; h++) {
        std::vector<Cell*> rows_;
        for (int w = 0; w < BOARD_WIDTH; w++) {
            Cell cell(w,h);
            rows_.push_back(&cell);
        }
        cells_.push_back(rows_);
    }
}
