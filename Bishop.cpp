#include "Bishop.h"


Bishop::Bishop(char color, int x, int y) : Piece('B', color, x, y) {}

bool Bishop::move(int newX, int newY) {
    if (std::abs(newX - getX()) == std::abs(newY - getY())) {
        setX(newX);
        setY(newY);
        return true;
    }
    return false;
}
