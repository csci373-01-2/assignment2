//these defines the header files

#define PRISONER_H

#include <iostream>
#include <string>

class Prisoner {
	public:
		std::string find_first_name();	
		std::string find_last_name();
		std::string given_name;
		std::string surname;
		int fetch_time_left();
		int sentence_month;
		int time_serve;
		int remainder;
		double good_time_wat;
		int ID_num_unique;
		
		void first_name(std::string);
		void last_name(std::string);
		void ID_num(int);
		void int_sentence(int);
		void time_served(int);
		void credit(int);
		void debt(int);
		void rollback_sentence();
		void statistic();
};

// the following func.s are either formulas or to define variables and such

void Prisoner::credit(int good_time_wat){
	time_serve += good_time_wat;
}

void Prisoner::debt( int penalty ){
	time_serve -= penalty;
}

int Prisoner::fetch_time_left( ){
	remainder = sentence_month - time_serve;
	return remainder;
}

void Prisoner::rollback_sentence(){
	sentence_month = remainder;
}
//end the following:
	
// outputs stats of prisoners from csv file
void Prisoner::statistic(){
	std::cout <<ID_num_unique << "	" << sentence_month << "	" << time_serve << "	" << given_name << "	" << surname << "	" << good_time_wat << std::endl;
} 
