#ifndef ROOK_H
#define ROOK_H

#include "Piece.h"

class Rook : public Piece {
public:
    Rook(char color, int x, int y);

    virtual bool move(int startX, int startY, int destX, int destY, Piece* board[8][8]) = 0;

};

#endif // ROOK_H
