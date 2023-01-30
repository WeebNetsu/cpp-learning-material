#include <iostream>
#include "dog.h"

using namespace std;

#define myConstVar 19 // create constant variable (C method)

int main()
{
	const int x = 14; //constant variable (Cannot be changed)
	enum
	{ //another metod to create constants
		j = 55,
		k = 210
	};

	cout << x << endl;
	cout << myConstVar << endl;
	cout << j << endl;

	dog kazam; //you need a constant object to call a constant function
	kazam.bark();

	return 0;
}