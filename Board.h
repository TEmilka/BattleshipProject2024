#pragma once
#include "Ship.h"
#include <vector>
//using namespace std;


class Board
{
protected:


	char tab[10][10];
	std::vector<Ship*> ships;


public:
	Board();
	virtual ~Board();

	virtual char getTab(int row, int col);
	virtual void setTab(int row, int col, char value);
	virtual bool checkCoordinates(int row, int col, int p, Ship& shipp);
	/**
	 * @brief - sprawdzenie poprawnosci strzalu
	 * @param row 
	 * @param col 
	 * @return 
	*/
	virtual bool strzal(int row, int col);

	virtual bool zatopienie();
	virtual bool isLoose();

	virtual void placeShips();
	virtual void printBoard();

};


