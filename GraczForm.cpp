#include "pch.h"
#include "GraczForm.h"
#include <fstream>

GraczForm::GraczForm()
{
	graczInt = new PlayerData<int>();
	graczDouble = new PlayerData<double>();
}

GraczForm::~GraczForm()
{
	delete graczInt;
	delete graczDouble;
}

void GraczForm::setIntWynik(int wynik)
{
	graczInt->setScore(wynik);
}

void GraczForm::setDoubleWynik(double wynik)
{
	graczDouble->setScore(wynik);
}

int GraczForm::getIntWynik()
{
	return graczInt->getScore();
}

double GraczForm::getDoubleWynik()
{
	return graczDouble->getScore();
}


void GraczForm::setNazwa(String^ nazwa)
{
	this->nazwa = nazwa;
}


String^ GraczForm::getNazwa()
{
	return nazwa;
}

