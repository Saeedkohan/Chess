#ifndef PIECE_H
#define PIECE_H

class Piece {
private:
    char name;
    char color;
    int x, y;
public:

    Piece(char name, char color, int x, int y)
            : name(name), color(color), x(x), y(y) {}

    virtual bool move(int newX, int newY) = 0;

    virtual ~Piece() {}
};

#endif // PIECE_H
