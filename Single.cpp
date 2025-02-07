#include "pch.h"
#include "Single.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Single::Single() : Ship(1)
{}

Single::~Single()
{}

int Single::getSize()
{
	return size;
}

void Single::setCoordinatesP(int row, int col, int p)
{
	coordinates[0].first = row;
	coordinates[0].second = col;
}


string Single::getType()
{
	return "Single-masted ship.";
}

int Single::getX(int index)
{
	return coordinates[index].first;
}

int Single::getY(int index)
{
	return coordinates[index].second;
}

int Single::gethitCount()
{
	return hitCount;
}

bool Single::getSunk()
{
	return sunk;
}

void Single::setSunk()
{
	sunk = true;

}

bool Single::isSunk()
{
	return hitCount == size;
}

bool Single::hit(int row, int col)
{
	for (int i = 0; i < size; i++) {
		if (coordinates[i].first == row && coordinates[i].second == col) {
			++hitCount;
			return true;
		}
	}
	return false;

}

