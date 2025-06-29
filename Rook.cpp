#include "Rook.h"

Rook::Rook(char color, int x, int y) : Piece('R', color, x, y) {}

bool Rook::move(int startX, int startY, int destX, int destY, Piece* board[8][8]) {

    if (startX != destX && startY != destY) {
        return false;
    }

    Piece* destinationPiece = board[destX][destY];
    if (destinationPiece != nullptr && destinationPiece->getColor() == this->getColor()) {
        return false;
    }

    if (startX != destX) {
        int step = (destX > startX) ? 1 : -1;
        for (int i = startX + step; i != destX; i += step) {
            if (board[i][startY] != nullptr) {
                return false;
            }
        }
    }

    else {
        int step = (destY > startY) ? 1 : -1;
        for (int i = startY + step; i != destY; i += step) {
            if (board[startX][i] != nullptr) {
                return false;
            }
        }
    }

    return true;
}