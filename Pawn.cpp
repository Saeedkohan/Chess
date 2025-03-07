#include "Pawn.h"

// Constructor implementation
Pawn::Pawn(char color, int x, int y) : Piece('P', color, x, y) {
}

bool Pawn::move(int newX, int newY) {
    int direction = (color == 'W') ? 1 : -1;

    if (newX == x + direction && newY == y) {
        x = newX;
        y = newY;
        return true;
    }

    if ((x == 1 && color == 'W') || (x == 6 && color == 'B')) {
        if (newX == x + 2 * direction && newY == y) {
            x = newX;
            y = newY;
            return true;
        }
    }

    return false;
}
