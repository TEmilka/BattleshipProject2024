#pragma once
#include "Ship.h"
class Quadruple :
	public Ship
{
public:
	Quadruple();
	~Quadruple();

	int getSize();
	/**
	 * @brief - ustawia coordy statku
	 * @param row 
	 * @param col 
	 * @param p - poziom/pion
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

