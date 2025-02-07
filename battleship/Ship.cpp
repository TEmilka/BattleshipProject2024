#include "pch.h"
#include "Ship.h"
#include <iostream>

using namespace std;

Ship::Ship(int size)
{
	sunk = false;
	hitCount = 0;
	this->size = size;
	coordinates = new pair<int, int>[size];
}

Ship::~Ship()
{
	delete[] coordinates;
}

int Ship::getSize()
{
	return 0;
}

void Ship::setCoordinatesP(int row, int col, int p)
{}

int Ship::getX(int index)
{
	return 0;
}

int Ship::getY(int index)
{
	return 0;
}

void Ship::setSunk()
{

}

bool Ship::getSunk()
{
	return sunk;
}

int Ship::gethitCount()
{
	return 0;
}

string Ship::getType()
{
	return "Ship!";
}

bool Ship::isSunk()
{
	return false;
}

bool Ship::hit(int row, int col)
{
	return false;
}
