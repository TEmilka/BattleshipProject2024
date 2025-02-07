#include "pch.h"
#include "Double.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Double::Double() : Ship(2)
{}

Double::~Double()
{}

int Double::getSize()
{
	return size;
}

void Double::setCoordinatesP(int row, int col, int p)
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


string Double::getType()
{
	return "Two-masted ship";
}

int Double::getX(int index)
{
	return coordinates[index].first;
}

int Double::getY(int index)
{
	return coordinates[index].second;
}

int Double::gethitCount()
{
	return hitCount;
}

bool Double::getSunk()
{
	return sunk;
}

void Double::setSunk()
{
	sunk = true;
}

bool Double::isSunk()
{
	return hitCount == size;
}

bool Double::hit(int row, int col)
{
	for (int i = 0; i < size; i++) {
		if (coordinates[i].first == row && coordinates[i].second == col) {
			++hitCount;
			return true;
		}
	}

	return false;  // Missed
}

