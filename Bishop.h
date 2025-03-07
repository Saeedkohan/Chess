#ifndef BISHOP_H
#define BISHOP_H

#include "Piece.h"
#include <cmath> // For std::abs

class Bishop : public Piece {
public:
    Bishop(char color, int x, int y);

    bool move(int newX, int newY) override;
};

#endif // BISHOP_H
