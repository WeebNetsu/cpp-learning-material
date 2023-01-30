#include <iostream>
#include "dog.h"

void dog::bark() const{ //to declare a constant function
/*
	tells all the class that it will NOT change any of the variables in the class
	so if the class had a variable x, you cannot do this:
	this->x = 5 (since you added const to the function)
*/
	// this->x = 2; // will cause error
	this->y = 2; // will not cause error since y has mutable keyword
	std::cout << "WOOF!" << std::endl;
}