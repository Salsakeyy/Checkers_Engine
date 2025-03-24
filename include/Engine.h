#ifndef ENGINE_H
#define ENGINE_H

#include <array>

class Board;  // Forward declaration

class Engine {
public:
    void initialize(Board* board);
    
    // Add the declaration for normalMoveTableWhite
    static const std::array<std::array<int, 2>, 26> normalMoveTableWhite;
};

#endif // ENGINE_H