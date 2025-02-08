#include "pch.h"
#include "Computer.h"
#include <iostream>
#include <vector>
#include "Single.h"
#include "Double.h"
#include <cstdlib>
#include <time.h> 
#include <random>

using namespace System::Windows::Forms;

Computer::Computer() : Board()
{}

Computer::~Computer()
{}

bool Computer::checkCoordinates(int row, int col, int p, Ship& shipp)
 {
    if (tab[row][col] != 'z' && tab[row][col] != 'O') {
        if (p == 1) {
            for (int i = 1; i < shipp.getSize(); i++) {
                ++row;
                if (row >= 10) {
                    return false;
                }
                if (isOccupied(row, col)) {
                    return false;
                }
            }
        }
        else if (p == 0) {
            for (int i = 1; i < shipp.getSize(); i++) {
                ++col;
                if (++col >= 10) {
                    return false;
                }
                if (col >= 10) {
                    return false;
                }
                if (isOccupied(row, col)) {
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

bool Computer::shot(int row, int col)
{
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

bool Computer::flooding()
{
    bool result = false;

    for (Ship* ship : ships) {

        if (!ship->getSunk()) {
            if (ship->isSunk()) {
                ship->setSunk();
                result = true;
                for (int i = 0; i < ship->getSize(); i++) {
                    tab[ship->getX(i)][ship->getY(i)] = 'X';

                }
            }
        }
    }
    return result;
}

bool Computer::isLoose()
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

void Computer::placeShips()
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

void Computer::setTab(int row, int col, char value)
{
    if (tab[row][col] != 'X' && tab[row][col] != 'T') {
        tab[row][col] = value;
    }
}
char Computer::getTab(int row, int col)
{
    return tab[row][col];
}


