//these defines the header files

#define PAROLEE_H
#include "prisoner.h"
#include <cmath>

//takes data from prisoner class
class Parolee: public Prisoner {
	public:	
		int id;
		int parole;
		Parolee();
};
//used to calculate parole
Parolee::Parolee() {
	parole = std::floor(.33 * sentence_month);
	std::cout << "Parole time: " << parole << " turns" << std::endl;
}
