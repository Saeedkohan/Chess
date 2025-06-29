#include "Pawn.h"

// Constructor implementation
Pawn::Pawn(char color, int x, int y) : Piece('P', color, x, y) {
}

bool Pawn::move(int startX, int startY, int destX, int destY, Piece *board[8][8]) {
    int forwardDirection = (getColor() == 'w') ? 1 : -1;


    if (startY == destY) {
        if (destX == startX + forwardDirection) {

            return board[destX][destY] == nullptr;
        }


        bool isStartingPos = (getColor() == 'w' && startX == 1) || (getColor() == 'b' && startX == 6);
        if (isStartingPos && destX == startX + 2 * forwardDirection) {
            return board[startX + forwardDirection][startY] == nullptr && board[destX][destY] == nullptr;
        }
    }


    if (std::abs(startY - destY) == 1 && destX == startX + forwardDirection) {
        Piece *destinationPiece = board[destX][destY];

        return destinationPiece != nullptr && destinationPiece->getColor() != this->getColor();
    }


    return false;
}
