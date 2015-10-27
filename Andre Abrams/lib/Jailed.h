// Andre Abrams, 10/13/2015
// Homework - Prison Classes

#ifndef JAILED_H
#define JAILED_H

#include "Parolee.h"

class Jailed: public Prisoner
{
public:
	Jailed();
	~Jailed();
	Jailed(int, int, double);
	int calculateGoodTime();
	void setGoodTimeRate();
	double getGoodTimeRate();

protected:
	double goodTimeRate;
}; 
Jailed::Jailed()
{}
Jailed::Jailed(int sentence, int timeServed, double goodTimeRate)
{

}

int Jailed::calculateGoodTime()
{
	goodTimeRate = timeServed * 0.1;
	goodTime = goodTimeRate;
	return goodTime;
} 

void Jailed::setGoodTimeRate()
{
	goodTimeRate = 0.0;
}

double Jailed::getGoodTimeRate()
{
	return goodTimeRate;
}

Jailed::~Jailed()
{
	
}
#endif