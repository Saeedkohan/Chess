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
public:
    int limit;
    User whiteUser;
    User blackUser;
    bool whiteTurn;
    // vector<vector<Piece>> board;
    Piece* board[8][8];
    Piece* selectedPiece;
public:
    Chess();
    ~Chess();

    void initialize();
    void printBoard();

};



#endif //CHESS_H
