#ifndef PAWN_H
#define PAWN_H

#include "Piece.h"

class Pawn : public Piece {
public:
    Pawn(char color, int x, int y);

    bool move(int newX, int newY) override;
};

#endif // PAWN_H
