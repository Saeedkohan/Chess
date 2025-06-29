#ifndef KNIGHT_H
#define KNIGHT_H
#include <cmath>
#include "Piece.h"

class Knight : public Piece {
public:

    Knight(char color, int x, int y);

    virtual bool move(int startX, int startY, int destX, int destY, Piece* board[8][8]) = 0;

};

#endif // KNIGHT_H
