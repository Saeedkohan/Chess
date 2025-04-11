//
// Created by saeed on 12/24/2024.
//

#ifndef CHESS_H
#define CHESS_H

#include <iostream>
#include <string>
#include <vector>
#include "Piece.h"  // Header file for the Piece class and its derived classes
#include "User.h"

using namespace std;


class Chess {
private:
    int limit;
    User whiteUser;
    User blackUser;
    bool whiteTurn;
    Piece *board[8][8];
    Piece *selectedPiece;
public:
    Chess();

    ~Chess();

    void initialize();

    void printBoard();

    void setWhiteUser(const User &user) {
        whiteUser = user;
    }

    void setBlackUser(const User &user) {
        blackUser = user;
    }

    const User &getWhiteUser() const {
        return whiteUser;
    }

    const User &getBlackUser() const {
        return blackUser;
    }

    bool isWhiteTurn() {
        return whiteTurn;
    }

    void setWhiteTurn(bool turn) {
        whiteTurn = turn;
    }

    Piece *getSelectedPiece() const {
        return selectedPiece;
    }

    void setSelectedPiece(Piece *piece) {
        selectedPiece = piece;
    }

    int getLimit() const {
        return limit;
    }

    void setLimit(int limit) {
        this->limit = limit;
    }

};


#endif //CHESS_H
