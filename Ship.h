#pragma once
#include <vector>
#include <string>

//using namespace std;

class Ship
{
protected:
	int size;
	std::pair<int, int>* coordinates;
	int hitCount;
	bool zatopiony;

public:
	Ship(int size);
	virtual ~Ship();

	virtual int getSize();

	/**
	 * @brief - funkcja do ustawiania coordow statkow
	 * @param row - wiersz
	 * @param col - kolumna
	 * @param p - poziomo/pionowo
	*/
	virtual void setCoordinatesP(int row, int col, int p);

	/**
	 * @brief zwraca pierwsza wspolrzedna o indeksie index statku 
	 * @param index 
	 * @return 
	*/
	virtual int getX(int index);
	virtual int getY(int index);

	virtual void setZatopiony();
	virtual bool getZatopiony();
	virtual int gethitCount();
	virtual std::string getType();
	virtual bool isSunk();
	virtual bool hit(int row, int col);

};

