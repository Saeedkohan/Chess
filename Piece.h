#ifndef PIECE_H
#define PIECE_H

#include <string>

using namespace std;

class Piece {
private:
    char name;
    char color;
    int x, y;
public:

    Piece(char name, char color, int x, int y)
            : name(name), color(color), x(x), y(y) {}


    virtual string toString() const;
//    friend ostream& operator<<(ostream &os, const Piece *piece);


    void setName(const char &name) {
        this->name = name;

    }

    char getName() const {
        return name;
    }

    void setColor(const char &color) {
        this->color = color;

    }

    char getColor() const {
        return color;
    }

    void setX(int newX) {
        x = newX;
    }

    int getX() const {
        return x;
    }

    void setY(int newY) {
        y = newY;
    }

    int getY() const {
        return y;
    }


    virtual bool move(int newX, int newY) = 0;

    virtual ~Piece() {}
};

ostream &operator<<(ostream &os, const Piece *piece);

#endif // PIECE_H
