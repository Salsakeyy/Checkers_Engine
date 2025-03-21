#include <iostream>
#include "Board.h"
#include "Move.h"
#include "Game.h"
#include "Engine.h"

int main() {
    std::cout << "Checkers Engine Test" << std::endl;
    
    // Test Board initialization
    Board board;
    board.initialize();
    board.display();
    
    // Test basic functionality
    std::cout << "\nTesting basic functionality..." << std::endl;
    
    // Create a game instance
    Game game;
    game.initialize();
    
    // Print initial state
    std::cout << "\nInitial game state:" << std::endl;
    game.displayState();
    
    std::cout << "\nEngine test:" << std::endl;
    Engine engine;
    engine.initialize(&board);
    
    std::cout << "\nAll tests completed." << std::endl;
    
    return 0;
}