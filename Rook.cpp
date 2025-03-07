#include "Rook.h"

Rook::Rook(char color, int x, int y) : Piece('R', color, x, y) {}

bool Rook::move(int newX, int newY) {
    if (newX == x || newY == y) {
        x = newX;
        y = newY;
        return true;
    }
    return false;
}
