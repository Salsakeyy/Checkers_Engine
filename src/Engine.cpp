#include "Engine.h"
#include "Board.h"
#include <iostream>

const std::array<std::array<int, 2>, 26> Engine::normalMoveTableWhite = {{
    {4, -1},
    {4, 5},
    {5, 6},
    {6, 7},
    {8, 9},
    {9, 10},
    {10, 11},
    {12, -1},
    {12, 13},
    {13, 14},
    {14, 15},
    {16, 17},
    {17, 18},
    {18, 19},
    {19, -1},
    {20, 21},
    {21, 22},
    {22, 23},
    {24, 25},
    {25, 26},
    {26, 27},
    {27, -1},
    {28, -1},
    {28, 29},
    {29, 30},
    {30, 31}
}}; // Added the missing semicolon here

void Engine::initialize(Board* board) {
    // Temporary implementation
    std::cout << "Engine initialized with board" << std::endl;
}