#pragma once
#include "Board.h"
class Person :
    public Board
{
public:
    Person();
    ~Person();

    /**
     * @brief - checking whether a ship can be placed on given coordinates
     * @param row 
     * @param col 
     * @param p - horizontally/vertically
     * @param shipp 
     * @return 
    */
    bool checkCoordinates(int row, int col, int p, Ship& shipp);
    bool shot(int row, int col);
    bool flooding();
    bool isLoose();
    void placeShips();
    void setTab(int row, int col, char value);
    char getTab(int row, int col);
};

