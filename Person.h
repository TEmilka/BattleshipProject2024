#pragma once
#include "Board.h"
class Person :
    public Board
{
public:
    Person();
    ~Person();

    /**
     * @brief - sprawdzanie czy na danych coordach mozna polozyc statek
     * @param row 
     * @param col 
     * @param p - poziomo/pionowo
     * @param shipp 
     * @return 
    */
    bool checkCoordinates(int row, int col, int p, Ship& shipp);
    bool strzal(int row, int col);
    bool zatopienie();
    bool isLoose();
    void placeShips();
    void setTab(int row, int col, char value);
    char getTab(int row, int col);
};

