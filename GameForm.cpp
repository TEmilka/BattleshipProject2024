#include "pch.h"
#include "GameForm.h"
#include "Person.h"
#include "Computer.h"
#include <cstdlib>
#include <time.h> 

GameForm::GameForm()
{
    computer = new Computer();
    czlowiek = new Person();
    graczInt = new PlayerData<int>();
    graczDouble = new PlayerData<double>();
    wynik = 0;
    graRozpoczeta = false;
}

GameForm::~GameForm()
{
    delete computer;
    delete czlowiek;
    delete graczInt;
    delete graczDouble;
}

void GameForm::setWynik(double value)
{
    wynik += value;
}

double GameForm::getWynik()
{
    return wynik;
}

char GameForm::getTabComputer(int row, int col)
{
    return computer->getTab(row, col);
}

char GameForm::getTabPerson(int row, int col)
{
    return czlowiek->getTab(row,col);
}

void GameForm::setComputerShip()
{
    computer->placeShips();
}

void GameForm::setPersonShip()
{
    czlowiek->placeShips();
}

bool GameForm::ComputerStrzal(int row, int col)
{
   return computer->strzal(row,col);
}

bool GameForm::PersonStrzal(int row, int col)
{
    return czlowiek->strzal(row,col);
}

bool GameForm::ComputerZatopienie()
{
    return computer->zatopienie();
}

bool GameForm::PersonZatopienie()
{
  return czlowiek->zatopienie();
}

void GameForm::setGraRozpoczeta()
{
    graRozpoczeta = true;
}

bool GameForm::getGraRozpoczeta()
{
    return graRozpoczeta;
}

bool GameForm::getComputerLoose()
{
    return computer->isLoose();
}

bool GameForm::getPersonLoose()
{
    return czlowiek->isLoose();
}




