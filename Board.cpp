#include "pch.h"
#include "Board.h"
#include <iostream>
#include <vector>
#include "Single.h"
#include "Double.h"
#include "Triple.h"
#include "Quadruple.h"


Board::Board()
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tab[i][j] = '.';
		}
	}
	ships.push_back(new Single());
	ships.push_back(new Single());
	ships.push_back(new Single());
	ships.push_back(new Single());

	ships.push_back(new Double());
	ships.push_back(new Double());
	ships.push_back(new Double());

	ships.push_back(new Triple());
	ships.push_back(new Triple());

	ships.push_back(new Quadruple());
}

Board::~Board()
{
	for (Ship* ship : ships) {
		delete ship;
	}
}

char Board::getTab(int row, int col)
{
	return 0;
}

void Board::setTab(int row, int col, char value)
{
}

bool Board::checkCoordinates(int row, int col, int p, Ship& shipp)
{
	return false;
}

bool Board::shot(int row, int col)
{
	return false;
}

bool Board::flooding()
{
	return false;
}

bool Board::isLoose()
{
	return false;
}

void Board::placeShips()
{}

void Board::printBoard()
{}

