#include "pch.h"
#include "GameForm.h"
#include "Person.h"
#include "Computer.h"
#include <cstdlib>
#include <time.h> 

GameForm::GameForm()
{
    computer = new Computer();
    person = new Person();
    playerInt = new PlayerData<int>();
    playerDouble = new PlayerData<double>();
    score = 0;
    gameStarted = false;
}
GameForm::~GameForm()
{
    delete computer;
    delete person;
    delete playerInt;
    delete playerDouble;
}

void GameForm::setScore(double value)
{
    score += value;
}
double GameForm::getScore()
{
    return score;
}

char GameForm::getTabComputer(int row, int col)
{
    return computer->getTab(row, col);
}
char GameForm::getTabPerson(int row, int col)
{
    return person->getTab(row,col);
}

void GameForm::setComputerShip()
{
    computer->placeShips();
}
void GameForm::setPersonShip()
{
    person->placeShips();
}

bool GameForm::ComputerShot(int row, int col)
{
   return computer->shot(row,col);
}
bool GameForm::PersonShot(int row, int col)
{
    return person->shot(row,col);
}

bool GameForm::ComputerFlooding()
{
    return computer->flooding();
}
bool GameForm::PersonFlooding()
{
  return person->flooding();
}

void GameForm::setGameStartedTrue()
{
    gameStarted = true;
}
bool GameForm::getGameStarted()
{
    return gameStarted;
}

bool GameForm::getComputerLoose()
{
    return computer->isLoose();
}
bool GameForm::getPersonLoose()
{
    return person->isLoose();
}




