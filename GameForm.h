#pragma once
#include "Board.h"
#include "PlayerData.h"

//using namespace std;
using namespace System::Windows::Forms;

ref class GameForm : public Form
{
private:

    double wynik;
    Board* computer;
    Board* czlowiek;
    PlayerData<int>* graczInt;
    PlayerData<double>* graczDouble;
    bool graRozpoczeta;
    int x;
    int y;


public:
    GameForm();
    ~GameForm();

    void setWynik(double value);
    double getWynik();
    char getTabComputer(int row, int col);
    char getTabPerson(int row, int col);
    void setComputerShip();
    void setPersonShip();

    bool ComputerStrzal(int row, int col);
    bool PersonStrzal(int row, int col);

    bool ComputerZatopienie();
    bool PersonZatopienie();

    void setGraRozpoczeta();
    bool getGraRozpoczeta();

    bool getComputerLoose();
    bool getPersonLoose();

};

