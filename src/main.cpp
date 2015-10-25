//includes

#include <iostream>
#include "prisoner.h"
#include "jailed.h"
#include <vector>
#include <cmath>
#include <fstream>
#include <sstream>
#include <queue>
#include <functional>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {  // program generated string does nothing useful
//initilization of several data types	
	int sentence_month;
	int served;
	std::string line;
	std::string ID;
	std::string sentence_date;
	std::string serve_time_lenght;
	std::string surname;
	std::string given_name;	
//used to "pause" the program	
	std::string pause_controller;
	
//command reads csv file to get date of the prisoners
	std::ifstream prisoner_data_file("prisoner_data.csv");
//failsafe
	if (!prisoner_data_file.is_open()) {
		goto label_exit;  //does not really understand why not to use goto
	}
	
	std::getline(prisoner_data_file, line);  //used to read csv files for data
	
//loop to read and obtain data from file
	while (getline(prisoner_data_file, line)) {
		std::stringstream prisoner_data_file(line);

		getline(prisoner_data_file, ID, ',');
		Prisoner::ID_num_unique.push_back(ID);
		
		getline(prisoner_data_file, sentence_date, ',');
		std::istringstream(sentence_date) >> sentence_month;
		Prisoner::sentence_month.push_back(sentence_month);
		
		getline(prisoner_data_file, serve_time_lenght, ',');
		std::istringstream(serve_time_lenght) >> served;
		Prisoner::time_serve.push_back(served);
		
		getline(prisoner_data_file, surname, ',');
		lastNameIn.push_back(surname);
		
		getline(prisoner_data_file, given_name, ',');
		firstNameIn.push_back(given_name);
	}
	
	prisoner_data_file.close();  //close loop and stops reading files
	
	Jailed inmate[9001]; // used to initilize data

	//process data
	for (int i = 0; i < ID_num_unique.size(); i++)	{
		inmate[i].ID_num(ID_num_unique[i]);
		inmate[i].int_sentence(sentence_month[i]);
		inmate[i].time_served(time_serve[i]);
		inmate[i].last_name(surname[i]);
		inmate[i].first_name(given_name[i]);
	}
	
	// initilize array to obtain remaining time
	int time[9001] = {};
	for(int i = 0; i < ID_num_unique.size(); i++){
		time[i] = inmate[i].fetch_time_left();
	}
	
	// sorting slgorithm
	std::priority_queue<int, std::vector<int>, std::greater<int>> q;
	//push things into a stack
	for (int b = 0; b < ID_num_unique.size(); b++){

		q.push(a[b]);
	}
	//pops things out of a stack
	while (!q.empty()){
		std::cout << q.top() << std::endl;
		q.pop();
	}
	
	label_exit:  //labels for goto
	
	
	std::cin >> pause_controller;  //very bad pause implementation
	
	return 0;
}

