// Andre Abrams, 10/13/2015
// Homework - Prison Classes

#ifndef PRISONER_H
#define PRISONER_H

#include <iostream>
#include <string>


using namespace std;

class Prisoner
{
public:
	void setFirstName( string );		
	string getFirstName( );			
	void setLastName( string );		
	string getLastName( );			
	void setIdNum( string );
	int getIdNum( );
	void setSentence( int );
	void setTimeServed( int );
	void credit( int );
	void debit( int );
	int getTimeRemain( );
	void reSentence( );
	void info( );

protected:
	int sentence;
	int timeServed;
	int timeRemain;
	double goodTime;

private:
	string firstName;
	string lastName;
	string idNum;
};


void Prisoner::setFirstName(string initFirstName)
{
	firstName = initFirstName;
}

string Prisoner::getFirstName()
{
	return firstName;
}

void Prisoner::setLastName(string initLastName)
{
	lastName = initLastName;
}

string Prisoner::getLastName()
{
	return lastName;
}

void Prisoner::setIdNum(string id)
{
	idNum = id;
}

void Prisoner::setSentence(int sentenceLength)
{
	sentence = sentenceLength;
}

void Prisoner::setTimeServed(int served)
{
	timeServed = served;
}

void Prisoner::credit(int goodTime)
{
	timeServed += goodTime;
}

void Prisoner::debit( int penalty )
{
	timeServed -= penalty;
}

int Prisoner::getTimeRemain( )
{
	timeRemain = sentence - timeServed;
	return timeRemain;
}

void Prisoner::reSentence()
{
	sentence = timeRemain;
}

// Output information of prisoner
void Prisoner::info()
{
	cout <<"  " << idNum << "    |    " << sentence << "   |    " << timeServed 
		 << "   |   " << firstName << "    |     " << lastName << "    |    " << goodTime << endl;
} 
#endif