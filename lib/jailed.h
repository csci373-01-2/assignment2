//these defines the header files

#define JAILED_H

#include "parolee.h"

class Jailed: public Prisoner {
public:
//initial data types
	int good_time_formula();
	void int_good_time();
	double fetch_good_time();
	double good_time_pro = 0.0;

	Jailed(int, int, double);
}; 

//formula
int Jailed::good_time_formula() {
	good_time_pro = time_serve * 0.1;
	good_time_wat = good_time_pro;
	return good_time_wat;
} 

//gets good time variable
double Jailed::fetch_good_time() {
	return good_time_pro;
}

