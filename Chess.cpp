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

void Chess::newGame(const string &userName, int limit) {
    regex validRegex("[A-Za-z0-9_]+$");

    if (!regex_match(userName, validRegex)) {
        cout << "Username format is invalid" << endl;
    } else if (limit < 0) {
        cout << "number should be positive to have a limit or 0 for no limit" << endl;
    } else if (whiteUser.getUserName() == userName) {
        cout << "you must chooce another player to start a game" << endl;
    }

    auto it = find(User::users.begin(), User::users.end(), User(userName, ""));
    if (it == User::users.end()) {
        cout << "No user exists with this username" << endl;
    } else {
        blackUser = *it;
        cout << whiteUser.getUserName() << " " << blackUser.getUserName() << " " << limit << endl;
    }
}

void Chess::showScoreboard() {
    for (User user: User::users) {
        cout << user.getUserName() << " " << user.getScore() << " " <<user.getWins() << " " << user.getDraws()<<" "<<user.getLoses() << endl ;
    }
}

void Chess::selectPiece(int x, int y) {

    if (x < 1 || x > 8 || y < 1 || y > 8) {
        std::cout << "wrong coordination" << std::endl;
        return;
    }

    int boardX = x - 1;
    int boardY = y - 1;


    Piece* piece = board[boardX][boardY];
    if (piece == nullptr) {
        std::cout << "no piece on this spot" << std::endl;
        return;
    }


    char pieceColor = piece->getColor();

    if ((whiteTurn && pieceColor == 'b') || (!whiteTurn && pieceColor == 'w')) {
        std::cout << "you can only select one of your pieces" << std::endl;
        return;
    }

    selectedPiece = piece;
    std::cout << "selected" << std::endl;
}

void Chess::deselectPiece() {

    if (selectedPiece == nullptr) {

        std::cout << "no piece is selected" << std::endl;
    } else {

        selectedPiece = nullptr;
        std::cout << "deselected" << std::endl;
    }
}


void Chess::movePiece(int x, int y) {

    if (movedInThisTurn) {
        std::cout << "already moved" << std::endl;
        return;
    }


    if (selectedPiece == nullptr) {
        std::cout << "do not have any selected piece" << std::endl;
        return;
    }


    if (x < 1 || x > 8 || y < 1 || y > 8) {
        std::cout << "wrong coordination" << std::endl;
        return;
    }


    int destX = x - 1;
    int destY = y - 1;


    int startX = -1, startY = -1;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if (board[i][j] == selectedPiece) {
                startX = i;
                startY = j;
                break;
            }
        }
        if (startX != -1) break;
    }


    if (!selectedPiece->move(startX, startY, destX, destY, board)) {
        std::cout << "cannot move to the spot" << std::endl;
        return;
    }


    Piece* destinationPiece = board[destX][destY];
    bool rivalDestroyed = (destinationPiece != nullptr);


    if (rivalDestroyed) {
        delete destinationPiece;
    }


    board[destX][destY] = selectedPiece;
    board[startX][startY] = nullptr;


    if (rivalDestroyed) {
        std::cout << "rival piece destroyed" << std::endl;
    } else {
        std::cout << "moved" << std::endl;
    }


    movedInThisTurn = true;


    selectedPiece = nullptr;
}