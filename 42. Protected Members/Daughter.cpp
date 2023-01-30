#include <iostream>
#include "Daughter.h"

using namespace std;

void Daughter::action(){
	pub = 1;
	protecc = 2;
	// priv = 3; //error because priv is a private variable

	cout << "Public: " << pub << endl << "Protected: " << protecc << endl;
}