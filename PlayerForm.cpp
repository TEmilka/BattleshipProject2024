#include "pch.h"
#include "PlayerForm.h"
#include <fstream>

PlayerForm::PlayerForm()
{
	playerInt = new PlayerData<int>();
	playerDouble = new PlayerData<double>();
}

PlayerForm::~PlayerForm()
{
	delete playerInt;
	delete playerDouble;
}

void PlayerForm::setIntScore(int score)
{
	playerInt->setScore(score);
}

void PlayerForm::setDoubleScore(double score)
{
	playerDouble->setScore(score);
}

int PlayerForm::getIntScore()
{
	return playerInt->getScore();
}

double PlayerForm::getDoubleScore()
{
	return playerDouble->getScore();
}


void PlayerForm::setName(String^ name)
{
	this->name = name;
}

String^ PlayerForm::getName()
{
	return name;
}

