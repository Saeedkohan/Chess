#include "Queen.h"
#include <cmath>

Queen::Queen(char color, int x, int y) : Piece('Q', color, x, y) {}


bool Queen::move(int startX, int startY, int destX, int destY, Piece* board[8][8]) {

    bool isRookMove = (startX == destX || startY == destY);
    bool isBishopMove = (std::abs(destX - startX) == std::abs(destY - startY));

    if (!isRookMove && !isBishopMove) {
        return false;
    }

    Piece* destinationPiece = board[destX][destY];
    if (destinationPiece != nullptr && destinationPiece->getColor() == this->getColor()) {
        return false;
    }


    if (isRookMove) {
        int step;
        if (startX != destX) {
            step = (destX > startX) ? 1 : -1;
            for (int i = startX + step; i != destX; i += step) {
                if (board[i][startY] != nullptr) return false;
            }
        } else {
            step = (destY > startY) ? 1 : -1;
            for (int i = startY + step; i != destY; i += step) {
                if (board[startX][i] != nullptr) return false;
            }
        }
    } else {
        int x_step = (destX > startX) ? 1 : -1;
        int y_step = (destY > startY) ? 1 : -1;
        int currentX = startX + x_step;
        int currentY = startY + y_step;
        while (currentX != destX) {
            if (board[currentX][currentY] != nullptr) return false;
            currentX += x_step;
            currentY += y_step;
        }
    }

    return true;
}