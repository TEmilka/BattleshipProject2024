#include "pch.h"
#include "Triple.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Triple::Triple() : Ship(3)
{}

Triple::~Triple()
{}

int Triple::getSize()
{
	return size;
}

void Triple::setCoordinatesP(int row, int col, int p)
{

	coordinates[0].first = row;
	coordinates[0].second = col;

	if (p == 1) {
		for (int i = 1; i < size; i++) {
			coordinates[i].first = ++row;
			coordinates[i].second = col;
		}
	}
	else if (p == 0) {
		for (int i = 1; i < size; i++) {
			coordinates[i].first = row;
			coordinates[i].second = ++col;
		}
	}

}


string Triple::getType()
{
	return "Three-masted ship.";
}

int Triple::getX(int index)
{
	return coordinates[index].first;
}

int Triple::getY(int index)
{
	return coordinates[index].second;
}

int Triple::gethitCount()
{
	return hitCount;
}

bool Triple::getSunk()
{
	return sunk;
}

void Triple::setSunk()
{
	sunk = true;
}

bool Triple::isSunk()
{
	return hitCount == size;
}

bool Triple::hit(int row, int col)
{
	for (int i = 0; i < size; i++) {
		if (coordinates[i].first == row && coordinates[i].second == col) {
			++hitCount;
			return true;
		}
	}

	return false;
}

