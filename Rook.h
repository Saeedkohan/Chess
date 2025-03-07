#ifndef ROOK_H
#define ROOK_H

#include "Piece.h"

class Rook : public Piece {
public:
    Rook(char color, int x, int y);

    bool move(int newX, int newY) override;
};

#endif // ROOK_H
