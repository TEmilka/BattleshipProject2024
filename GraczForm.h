#pragma once
#include "PlayerData.h"

using namespace System;

ref class GraczForm
{
public:
	PlayerData<int>* graczInt;
	PlayerData<double>* graczDouble;
	String^ nazwa;

	GraczForm();
	~GraczForm();

	void setIntWynik(int wynik);
	void setDoubleWynik(double wynik);

	int getIntWynik();
	double getDoubleWynik();

	void setNazwa(String^ nazwa);
	String^ getNazwa();

};

