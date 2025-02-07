#pragma once
#include "Ship.h"
class Triple :
	public Ship
{
public:
	Triple();
	~Triple();

	int getSize();
	/**
	 * @brief - ustawia coordy statku
	 * @param row 
	 * @param col 
	 * @param p - pion/poziom
	*/
	void setCoordinatesP(int row, int col, int p);
	std::string getType();

	
	int getX(int index);
	int getY(int index);

	int gethitCount();

	bool getZatopiony();
	void setZatopiony();
	bool isSunk();
	bool hit(int row, int col);
};

