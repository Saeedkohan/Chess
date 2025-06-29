#include "Knight.h"

Knight::Knight(char color, int x, int y) : Piece('N', color, x, y) {}

bool Knight::move(int startX, int startY, int destX, int destY, Piece* board[8][8]) {

    int dx = std::abs(destX - startX);
    int dy = std::abs(destY - startY);
    if (!((dx == 2 && dy == 1) || (dx == 1 && dy == 2))) {
        return false;
    }

    Piece* destinationPiece = board[destX][destY];
    if (destinationPiece != nullptr && destinationPiece->getColor() == this->getColor()) {
        return false;
    }

    return true;
}