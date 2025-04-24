#include "King.h"
#include <cmath>

King::King(char color, int x, int y) : Piece('K', color, x, y) {}

bool King::move(int newX, int newY) {
    if (std::abs(newX - getX()) <= 1 && std::abs(newY - getY()) <= 1) {
        setX(newX);
        setY(newY);
        return true;
    }
    return false;
}
