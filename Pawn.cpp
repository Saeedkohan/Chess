#include "Pawn.h"

// Constructor implementation
Pawn::Pawn(char color, int x, int y) : Piece('P', color, x, y) {
}

bool Pawn::move(int newX, int newY) {
    int direction = (getColor() == 'W') ? 1 : -1;

    if (newX == getX() + direction && newY == getY()) {
        setX(newX);
        setY(newY);
        return true;
    }

    if ((getX() == 1 && getColor() == 'W') || (getX() == 6 && getColor() == 'B')) {
        if (newX == getX() + 2 * direction && newY == getY()) {
            setX(newX);
            setY(newY);
            return true;
        }
    }

    return false;
}
