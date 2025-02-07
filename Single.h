#pragma once
#include "Ship.h"

class Single : public Ship
{
public:
	Single();
	~Single();

	int getSize();
	void setCoordinatesP(int row, int col, int p);
	std::string getType();

	int getX(int index);
	int getY(int index);
	int gethitCount();

	bool getSunk();
	void setSunk();
	bool isSunk();
	bool hit(int row, int col);
};

