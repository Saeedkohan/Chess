#ifndef PAWN_H
#define PAWN_H

#include "Piece.h"

class Pawn : public Piece {
public:
    Pawn(char color, int x, int y);

    virtual bool move(int startX, int startY, int destX, int destY, Piece* board[8][8]) = 0;

};

#endif // PAWN_H
