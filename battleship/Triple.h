#pragma once
#include "Ship.h"
class Triple :
	public Ship
{
public:
	Triple();
	~Triple();

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

