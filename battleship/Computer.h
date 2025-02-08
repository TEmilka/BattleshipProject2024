#pragma once
#include "Board.h"
    class Computer :
        public Board
    {
    public:
        Computer();
        ~Computer();

        bool checkCoordinates(int row, int col, int p, Ship& shipp);
        bool shot(int row, int col); 
        bool flooding(); 
        bool isLoose(); 
        void placeShips();

        void setTab(int row, int col, char value);
        char getTab(int row, int col); 
        
    };
