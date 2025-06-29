#ifndef BISHOP_H
#define BISHOP_H

#include "Piece.h"
#include <cmath> // For std::abs

class Bishop : public Piece {
public:
    Bishop(char color, int x, int y);

    virtual bool move(int startX, int startY, int destX, int destY, Piece* board[8][8]) = 0;

};

#endif // BISHOP_H
