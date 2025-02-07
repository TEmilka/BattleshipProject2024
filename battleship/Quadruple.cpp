#include "pch.h"
#include "Quadruple.h"
#include <iostream>
#include <cstdlib>

using namespace std;

Quadruple::Quadruple() : Ship(4)
{}

Quadruple::~Quadruple()
{}

int Quadruple::getSize()
{
	return size;
}

void Quadruple::setCoordinatesP(int row, int col, int p)
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


string Quadruple::getType()
{
	return "Four-masted ship!";
}

int Quadruple::getX(int index)
{
	return coordinates[index].first;
}

int Quadruple::getY(int index)
{
	return coordinates[index].second;
}

int Quadruple::gethitCount()
{
	return hitCount;
}

bool Quadruple::getSunk()
{
	return sunk;
}

void Quadruple::setSunk()
{
	sunk = true;
}

bool Quadruple::isSunk()
{
	return hitCount == size;
}

bool Quadruple::hit(int row, int col)
{
	for (int i = 0; i < size; i++) {
		if (coordinates[i].first == row && coordinates[i].second == col) {
			++hitCount;
			return true;
		}
	}

	return false;  // Missed
}

