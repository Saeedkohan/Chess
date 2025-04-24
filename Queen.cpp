#include "Queen.h"
#include <cmath>

Queen::Queen(char color, int x, int y) : Piece('Q', color, x, y) {}

bool Queen::move(int newX, int newY) {
    if (newX == getX() || newY == getY() || std::abs(newX - getX()) == std::abs(newY - getY())) {
        setX(newX);
        setY(newY);
        return true;
    }
    return false;
}
