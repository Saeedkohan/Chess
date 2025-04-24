#include "Knight.h"

Knight::Knight(char color, int x, int y) : Piece('N', color, x, y) {}

bool Knight::move(int newX, int newY) {
    if ((std::abs(newX - getX()) == 2 && std::abs(newY - getY()) == 1) ||
        (std::abs(newX - getX()) == 1 && std::abs(newY - getY()) == 2)) {
        setX(newX);
        setY(newY);
        return true;
        }
    return false;
}
