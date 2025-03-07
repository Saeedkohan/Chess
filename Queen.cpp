#include "Queen.h"
#include <cmath>

Queen::Queen(char color, int x, int y) : Piece('Q', color, x, y) {}

bool Queen::move(int newX, int newY) {
    if (newX == x || newY == y || std::abs(newX - x) == std::abs(newY - y)) {
        x = newX;
        y = newY;
        return true;
    }
    return false;
}
