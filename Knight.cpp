#include "Knight.h"

Knight::Knight(char color, int x, int y) : Piece('N', color, x, y) {}

bool Knight::move(int newX, int newY) {
    if ((std::abs(newX - x) == 2 && std::abs(newY - y) == 1) ||
        (std::abs(newX - x) == 1 && std::abs(newY - y) == 2)) {
        x = newX;
        y = newY;
        return true;
        }
    return false;
}
