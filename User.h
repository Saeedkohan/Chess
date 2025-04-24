//
// Created by saeed on 12/14/2024.
//

#ifndef USER_H
#define USER_H

#include <string>
#include <regex>
#include <iostream>
#include <vector>

using namespace std;

class User {
private:
    std::string userName;
    std::string password;
    int wins;
    int draws;
    int loses;
    static vector<User> users;

public:
    User(const string &userName, const string &password);

    User();

    void setUserName(const string& userName) {
        this->userName = userName;
    }

    string getUserName() const {
        return userName;
    }

    void setPassword(const string& password) {
        this->password = password;
    }

    string getPassword() const{
        return password;
    }

    bool operator==(const User &other) const;

    //کلمه const در این نوع متود ها به این معنی است که به کامپایلر  بگوید این متد، هیچ تغییری در داده‌های شیء کلاس ایجاد نمی‌کند.
    string toString() const;

    bool isValid() const;

    static void registerUser(const string &userName, const string &password);

    static User login(const string &userName, const string &password);


};


#endif //USER_H
