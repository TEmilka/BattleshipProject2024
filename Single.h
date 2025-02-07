#pragma once
#include "Ship.h"

class Single : public Ship
{
public:
	Single();
	~Single();

	int getSize();
	/**
	 * @brief - ustawianie coordow statku
	 * @param row 
	 * @param col 
	 * @param p - poziomo/pionnowo
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

