#ifndef KNIGHT_H
#define KNIGHT_H
#include <cmath>
#include "Piece.h"

class Knight : public Piece {
public:

    Knight(char color, int x, int y);

    bool move(int newX, int newY) override;
};

#endif // KNIGHT_H
