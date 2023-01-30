#include <iostream>
#include "People.h"
//optional, but we included it inside the .h file
// #include "Birthday.h" 

//	also optional, since we included it inside the .h file
// using namespace std;

People::People(string pName, Birthday bo)
: name(pName), dateOfBirth(bo) //because we're using an object as a parameter
{

}

void People::toString(){
	cout << name << " was born on ";
	dateOfBirth.printDate(); //to get the date of birth
}