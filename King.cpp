#include "King.h"
#include <cmath>

King::King(char color, int x, int y) : Piece('K', color, x, y) {}

bool King::move(int startX, int startY, int destX, int destY, Piece* board[8][8]) {

    if (std::abs(destX - startX) > 1 || std::abs(destY - startY) > 1) {
        return false;
    }


    Piece* destinationPiece = board[destX][destY];
    if (destinationPiece != nullptr) {

        if (destinationPiece->getColor() == this->getColor()) {
            return false;
        }
    }

    return true;
}