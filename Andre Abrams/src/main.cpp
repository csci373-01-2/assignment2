// Andre Abrams, 10/13/2015
// Homework - Prison Classes

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <queue>
#include <functional>
#include "Prisoner.h"
#include "Jailed.h"
using namespace std;

int main()
{
	
	string line, ID, sentenceIn, servedIn, lastName, firstName;
	int sentence, served;
	
	ifstream data("prisoner_data.csv");

	// Returns error if file was not opened correctly
	if (!data.is_open())
	{
		exit(EXIT_FAILURE);
	}
	
	// Skips first line of csv file
	getline(data, line);

	vector<string> idNum;
	vector<int> sentenceLen;
	vector<int> servedTime;
	vector<string> lastNameIn;
	vector<string> firstNameIn;
	
	// Read and parse data from csv file
	while (getline(data, line))
	{
		stringstream data(line);

		getline(data, ID, ',');
		idNum.push_back(ID);
		

		getline(data, sentenceIn, ',');
		istringstream(sentenceIn) >> sentence;
		sentenceLen.push_back(sentence);
		
		
		getline(data, servedIn, ',');
		istringstream(servedIn) >> served;
		servedTime.push_back(served);
		

		getline(data, lastName, ',');
		lastNameIn.push_back(lastName);
		

		getline(data, firstName, ',');
		firstNameIn.push_back(firstName);
	}
	
	data.close();
	
	Jailed p[100]; // Initializing Jailed object

	// Assigns object p[i] values from called functions 
	for (int i = 0; i < idNum.size(); i++)
	{
		p[i].setIdNum(idNum[i]);
		p[i].setSentence(sentenceLen[i]);
		p[i].setTimeServed(servedTime[i]);
		p[i].setLastName(lastNameIn[i]);
		p[i].setFirstName(firstNameIn[i]);
	}

	// Create array of remaining time
	int a[100] = {};
	for(int i = 0; i < idNum.size(); i++)
		a[i] = p[i].getTimeRemain();

	// Sort ramaining time
	priority_queue<int, vector<int>, greater<int>> q;
	for (int x = 0; x < idNum.size(); x++)
		q.push(a[x]);

	// Outputs lowest number at top of queue then drops it
	while (!q.empty())
	{
		cout << q.top() << endl;
		q.pop();
	}
	
	system("pause");
	return 0;
}