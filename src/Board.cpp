#include "Board.h"
#include <iostream>
#include <iomanip>
#include <sstream>

void Board::initialize() {
    //starting position
    m_blackPieces = Black; // sets Black to 0x00000FFF
    m_whitePieces = White; // sets White to 0xFFF00000
    m_Kings = Kings; //sets kings to 0

    std::cout << "Board initialized" << std::endl;
}   

void Board::display() {
    // Temporary implementation     
    int row = 0;   
        for (int col = 0; col < 8; col++) {
            // Only process playable squares (black squares on checkerboard)
            if ((row + col) % 2 == 1) {
                // Convert row,col to square index (0-31)
                int square = (row * 4) + (col / 2);
                
                // Determine what to display based on piece presence
                uint32_t squareMask = 1 << square;
                
                if (m_blackPieces & squareMask) {
                    std::cout << "b";
                } else if (m_whitePieces & squareMask) {
                    std::cout << "w";
                } else {
                    std::cout << " ";
                }
            } else {
                // Not a playable square (white squares on checkerboard)
                std::cout << " ";
            }
            
            std::cout << "|";
        }
    std::cout << "Displaying board" << std::endl;
}