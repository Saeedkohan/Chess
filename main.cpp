#include <iostream>
#include <string>

#include <vector>
#include "King.h"
#include "Queen.h"
#include "Rook.h"
#include "Bishop.h"
#include "Chess.h"
#include "Knight.h"
#include "Pawn.h"
#include "User.h"
using namespace std;

int main() {
    Chess chess;
    chess.initialize();
    chess.printBoard();
//    while (true) {
//        // cout << "Enter command: "<< endl;
//        string input;
//        getline(cin, input);
//
//
//        stringstream ss(input);
//        vector<string> parts;
//        string part;
//
//        while (ss >> part) {
//            parts.push_back(part);
//        }
//
//        if (parts.empty()) {
//            continue;
//        }
//
//
//        if (parts[0] == "help") {
//            if (chess.getWhiteUser(). ==  && chess.blackUser.userName.empty()) {
//                cout << R"(register [username] [password]
//login [username] [password]
//remove [username] [password]
//list_users
//help
//exit)" << endl;
//            } else if (!chess.whiteUser.userName.empty() && chess.blackUser.userName.empty()) {
//                cout << R"(new_game [username] [limit]
//scoreboard
//list_user
//help
//logout)" << endl;
//            } else if (!chess.whiteUser.userName.empty() && !chess.blackUser.userName.empty()) {
//                cout << R"(select [x],[y]
//move [x],[y]
//next_turn
//show_turn
//undo
//undo_number
//show_moves [-all]
//show_killed [-all]
//help
//forfeit)" << endl;
//            }
//        } else if (parts[0] == "register") {
//            if (parts.size() == 3) {
//                User::registerUser(parts[1], parts[2]);
//            } else {
//                std::cout << "invalid command";
//            }
//        } else if (parts[0] == "list_users") {
//            for (User user: User::users) {
//                cout << user.userName << endl;
//            }
//        } else if (parts[0] == "login") {
//            if (parts.size() == 3) {
//                User  u = User::login(parts[1], parts[2]);
//                if (u.isValid()) {
//                    chess.whiteUser = u;
//                }
//            } else {
//                std::cout << "invalid command" << std::endl;
//            }
//        }
//    }


    return 0;
}
