#ifndef KING_H
#define KING_H

#include "Piece.h"

class King : public Piece {
public:
    King(char color, int x, int y);
    virtual bool move(int startX, int startY, int destX, int destY, Piece* board[8][8]) = 0;

};

#endif
