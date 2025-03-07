#include "King.h"
#include <cmath>

King::King(char color, int x, int y) : Piece('K', color, x, y) {}

bool King::move(int newX, int newY) {
    if (std::abs(newX - x) <= 1 && std::abs(newY - y) <= 1) {
        x = newX;
        y = newY;
        return true;
    }
    return false;
}
