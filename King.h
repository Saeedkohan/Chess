#ifndef KING_H
#define KING_H

#include "Piece.h"

class King : public Piece {
public:
    King(char color, int x, int y);
    bool move(int newX, int newY) override;
};

#endif
