#pragma once
#include "Ship.h"
#include <vector>

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
	/**
	 * @brief - checking the correctness of the shot
	 * @param row 
	 * @param col 
	 * @return 
	*/
	virtual bool shot(int row, int col);

	virtual bool flooding();
	virtual bool isLoose();

	virtual void placeShips();
	virtual void printBoard();

	bool isOccupied(int row, int col);

};


