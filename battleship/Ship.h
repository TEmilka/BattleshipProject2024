#pragma once
#include <vector>
#include <string>

class Ship
{
protected:
	int size;
	std::pair<int, int>* coordinates;
	int hitCount;
	bool sunk;

public:
	Ship(int size);
	virtual ~Ship();

	virtual int getSize();

	/**
	 * @brief - Function to set the coordinates of the ships.
	 * @param row - row
	 * @param col - column
	 * @param p - Horizontal/Vertical
	*/
	virtual void setCoordinatesP(int row, int col, int p);

	/**
	 * @brief Returns the first coordinate at the index of the ship
	 * @param index 
	 * @return 
	*/
	virtual int getX(int index);
	virtual int getY(int index);

	virtual void setSunk();
	virtual bool getSunk();
	virtual int gethitCount();
	virtual std::string getType();
	virtual bool isSunk();
	virtual bool hit(int row, int col);

};

