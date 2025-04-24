#include "Chess.h"
#include "Rook.h"     // Include all derived classes
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"
#include "Pawn.h"


Chess::Chess() : limit(0), whiteUser(), blackUser(), whiteTurn(false), selectedPiece(nullptr) {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            board[i][j] = nullptr;
        }
    }
}

void Chess::initialize() {
    // Black
    board[0][0] = new Rook('b', 8, 1);
    board[0][1] = new Knight('b', 8, 2);
    board[0][2] = new Bishop('b', 8, 3);
    board[0][3] = new Queen('b', 8, 4);
    board[0][4] = new King('b', 8, 5);
    board[0][5] = new Bishop('b', 8, 6);
    board[0][6] = new Knight('b', 8, 7);
    board[0][7] = new Rook('b', 8, 8);

    for (int i = 0; i < 8; ++i) {
        board[1][i] = new Pawn('b', 7, i + 1);
    }

    // White
    board[7][0] = new Rook('w', 1, 1);
    board[7][1] = new Knight('w', 1, 2);
    board[7][2] = new Bishop('w', 1, 3);
    board[7][3] = new Queen('w', 1, 4);
    board[7][4] = new King('w', 1, 5);
    board[7][5] = new Bishop('w', 1, 6);
    board[7][6] = new Knight('w', 1, 7);
    board[7][7] = new Rook('w', 1, 8);

    for (int i = 0; i < 8; ++i) {
        board[6][i] = new Pawn('w', 2, i + 1);
    }


}

void Chess::printBoard() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (board[i][j] != nullptr) {
                cout << board[i][j] << '|';
            } else {
                cout << "  |";
            }
        }
        cout << "\n";
    }
}

Chess::~Chess() {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            delete board[i][j];
            board[i][j] = nullptr;
        }
    }
}
