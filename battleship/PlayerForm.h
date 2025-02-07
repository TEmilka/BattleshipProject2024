#pragma once
#include "PlayerData.h"

using namespace System;

ref class PlayerForm
{
public:
	PlayerData<int>* playerInt;
	PlayerData<double>* playerDouble;
	String^ name;

	PlayerForm();
	~PlayerForm();

	void setIntScore(int score);
	void setDoubleScore(double score);

	int getIntScore();
	double getDoubleScore();

	void setName(String^ name);
	String^ getName();

};

