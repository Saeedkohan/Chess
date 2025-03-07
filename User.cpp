//
// Created by saeed on 12/14/2024.
//

#include "User.h"
std::vector<User> User::users = {};

User::User(const string &userName, const string &password): userName(userName), password(password) {
}

User::User(): userName(""), password("") {
}

bool User::operator==(const User &other) const {
    return userName == other.userName && password == other.password;
}

string User::toString() const {
    return "username:" + userName + ",password:" + password;
}
bool User:: isValid() const {
    return !userName.empty() && !password.empty();
}

void User::registerUser(const std::string &userName, const std::string &password) {
    regex validRegex("[A-Za-z0-9_]+$");

    if (!regex_match(userName, validRegex)) {
        cout << "Username format is invalid" << endl;
    } else if (!regex_match(password, validRegex)) {
        cout << "Password format is invalid" << endl;
    } else {
        cout << "register successful" << endl;
        users.emplace_back(userName, password);
    }
}

User User::login(const string &userName, const string &password) {
    regex validRegex("[A-Za-z0-9_]+$");

    if (!regex_match(userName, validRegex)) {
        cout << "Username format is invalid" << endl;
        return User();
    }

    if (!regex_match(password, validRegex)) {
        cout << "Password format is invalid" << endl;
        return User();
    }

    auto it = find(users.begin(), users.end(), User(userName, password));
    if (it == users.end()) {
        cout << "No user exists with this username" << endl;
        return User();
    }
    if (it->password != password) {
        cout << "Incorrect password" << endl;
        return User();
    }
    cout << "Login successful" << endl;
    return *it;
}
