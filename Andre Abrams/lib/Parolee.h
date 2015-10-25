// Andre Abrams, 10/13/2015
// Homework - Prison Classes

#ifndef PAROLEE_H
#define PAROLEE_H
#include "Prisoner.h"

class Parolee: public Prisoner {
	int id;
public:
	Parolee();
	
private:
	int parole;
};

Parolee::Parolee()
{
	parole = floor(.33 * sentence);
	cout << "This parolee is on parole for " << parole << " months." << endl;
}

#endif