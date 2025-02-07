#pragma once
#include "Ship.h"
class Double :
	public Ship
{
public:
	Double();
	~Double();

	int getSize();
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

