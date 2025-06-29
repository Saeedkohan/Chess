#include "Bishop.h"


Bishop::Bishop(char color, int x, int y) : Piece('B', color, x, y) {}


bool Bishop::move(int startX, int startY, int destX, int destY, Piece* board[8][8]) {

    if (std::abs(destX - startX) != std::abs(destY - startY)) {
        return false;
    }


    Piece* destinationPiece = board[destX][destY];
    if (destinationPiece != nullptr && destinationPiece->getColor() == this->getColor()) {
        return false;
    }


    int x_step = (destX > startX) ? 1 : -1;
    int y_step = (destY > startY) ? 1 : -1;
    int currentX = startX + x_step;
    int currentY = startY + y_step;

    while (currentX != destX) {
        if (board[currentX][currentY] != nullptr) {
            return false;
        }
        currentX += x_step;
        currentY += y_step;
    }

    return true;
}