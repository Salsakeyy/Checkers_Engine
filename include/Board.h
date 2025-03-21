#ifndef BOARD_H
#define BOARD_H

#include <cstdint>
#include <string>

class Board {
public:
    //constants for piece types
    static const uint32_t Empty = 0x00000000; //empty
    static const uint32_t Black = 0x00000FFF; // black
    static const uint32_t White = 0xFFF00000; // White 
    static const uint32_t Kings = 0x00000000; //Kings
    
    Board();
    

    void initialize();

    void display();

private:
    uint32_t m_blackPieces;
    uint32_t m_whitePieces;
    uint32_t m_Kings;

};

#endif // BOARD_H