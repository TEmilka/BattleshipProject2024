#pragma once
#include "Board.h"
#include "PlayerData.h"

using namespace System::Windows::Forms;
/**
* 
**/
ref class GameForm : public Form
{
private:

    double score;
    Board* computer;
    Board* person;
    PlayerData<int>* playerInt;
    PlayerData<double>* playerDouble;
    bool gameStarted;
    int x;
    int y;


public:
    GameForm();
    ~GameForm();

    void setScore(double value); 
    double getScore(); 

    char getTabComputer(int row, int col); 
    char getTabPerson(int row, int col); 

    void setComputerShip(); 
    void setPersonShip(); 

    bool ComputerShot(int row, int col); 
    bool PersonShot(int row, int col); 

    bool ComputerFlooding(); 
    bool PersonFlooding(); 

    void setGameStartedTrue(); 
    bool getGameStarted(); 

    bool getComputerLoose(); 
    bool getPersonLoose(); 

};

