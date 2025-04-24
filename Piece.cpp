#include "Piece.h"

string Piece::toString() const {
    return string(1, name) + string(1, color);
}
ostream& operator<<(ostream &os, const Piece* piece) {
    if (piece)
        os << piece->toString();
    return os;
}
