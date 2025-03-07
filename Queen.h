#ifndef QUEEN_H
#define QUEEN_H

#include "Piece.h"

class Queen : public Piece {
public:
    Queen(char color, int x, int y);
    bool move(int newX, int newY) override;
};

#endif // QUEEN_H
