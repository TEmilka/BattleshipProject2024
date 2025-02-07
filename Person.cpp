#include "pch.h"
#include "Person.h"
#include "Ship.h"

#include <vector>
#include <iostream>
#include <thread> 
#include <chrono>  
#include <cstdlib>
#include <time.h> 
#include <random>

using namespace std;

Person::Person() : Board()
{}
Person::~Person()
{
}

bool Person::checkCoordinates(int row, int col, int p, Ship& shipp)
{
	if (row < 0 || row >= 10 || col < 0 || col >= 10) {
		cout << "Wrong index entered!" << endl;
		return false;
	}
	if (tab[row][col] != 'z' && tab[row][col] != 'O') {
		if (p == 1) {
			for (int i = 1; i < shipp.getSize(); i++) {
				++row;
				if (row >= 10) {
					cout << "The ship goes beyond the board area!" << endl;
					return false;
				}
				if (tab[row][col] == 'z' || tab[row][col] == 'O') {
					cout << "There is already a ship here!" << endl;
					return false;
				}
			}
		}
		else if (p == 0) {
			for (int i = 1; i < shipp.getSize(); i++) {
				++col;
				if (col >= 10) {
					cout << "The ship goes beyond the board area!" << endl;
					return false;
				}
				if (tab[row][col] == 'z' || tab[row][col] == 'O') {
					cout << "There is already a ship here!" << endl;
					return false;
				}
			}
		}
	}
	else {
		return false;
	}
	return true;
}

bool Person::shot(int row, int col)
{
	srand(static_cast<unsigned int>(time(NULL)));
	row = rand() % 10 + 0;
	col = rand() % 10 + 0;

	for (Ship* ship : ships) {
		if (tab[row][col] == 'T' || tab[row][col] == 'X') {
			return false;
		}
		else {
			if (ship->hit(row, col)) {
				tab[row][col] = 'T';
				return true;
			}
			else {
				tab[row][col] = 'P';

			}
		}

	}
	return false;
}

bool Person::flooding()
{
	for (Ship* ship : ships) {

		if (!ship->getSunk()) {
			if (ship->isSunk()) {
				ship->setSunk();
				for (int i = 0; i < ship->getSize(); i++) {
					tab[ship->getX(i)][ship->getY(i)] = 'X';
				}
				return true;
			}
		}

	}
	return false;
}

bool Person::isLoose()
{
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			if (tab[i][j] == 'O') {
				return false;
			}
		}
	}
	return true;
}

void Person::placeShips()
{
	int row = 0;
	int col = 0;
	int p = 0;

	std::random_device rd;
	std::mt19937 gen(rd());

	for (Ship* ship : ships) {

		do {
			row = gen() % 10 + 0;
			col = gen() % 10 + 0;
			p = gen() % 2 + 0;


		} while (!checkCoordinates(row, col, p, *ship));

		ship->setCoordinatesP(row, col, p);

		for (int i = 0; i < ship->getSize(); i++) {
			int x = ship->getX(i);
			int y = ship->getY(i);

			tab[x][y] = 'O';

			for (int k = x - 1; k <= x + 1; k++) {
				for (int l = y - 1; l <= y + 1; l++) {
					if (k != x || l != y) {
						if (k >= 0 && k < 10 && l >= 0 && l < 10 && tab[k][l] != 'O') {
							tab[k][l] = 'z';
						}
					}
				}
			}
		}
	}

}

void Person::setTab(int row, int col, char value)
{
	if (tab[row][col] != 'X' && tab[row][col] != 'T') {
		tab[row][col] = value;
	}
	else {
		//Nth
	}
}

char Person::getTab(int row, int col)
{
	return tab[row][col];
}

