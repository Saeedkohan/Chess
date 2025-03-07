#include "Bishop.h"


Bishop::Bishop(char color, int x, int y) : Piece('B', color, x, y) {}
bool Bishop::move(int newX, int newY) {
    if (std::abs(newX - x) == std::abs(newY - y)) {
        x = newX;
        y = newY;
        return true;
    }
    return false;
}
