cmake_minimum_required(VERSION 3.29)
project(chess_C)

set(CMAKE_CXX_STANDARD 20)

add_executable(chess_C main.cpp
        King.cpp
        King.h
        Piece.cpp
        Piece.h
        Queen.cpp
        Queen.h
        Bishop.cpp
        Bishop.h
        Rook.cpp
        Rook.h
        Knight.cpp
        Knight.h
        Pawn.cpp
        Pawn.h
        User.cpp
        User.h
        Chess.cpp
        Chess.h)
