#include <iostream>

#include "customNamespace.hpp" // import custom namespace

namespace stuffs // create custom namespace
{
	// just put functions in here
	int returnZero(){
		return 0;
	}
}

int main(int argc, char const *argv[])
{
	// use namespace
	std::cout << stuffs::returnZero() << std::endl;
	
	// from custom namespace file
	custom::printAge(12);

	return 0;
}