#ifndef PEOPLE_H
#define PEOPLE_H 

#include "Birthday.h" //to use the Birthday object in here
#include <string> // to be able to use strings

using namespace std; // to be able to use <string>

class People{
public:
	//The birthday object is a parameter
	People(string pName, Birthday bo);
	void toString();

private:
	string name;
	Birthday dateOfBirth;
};

#endif