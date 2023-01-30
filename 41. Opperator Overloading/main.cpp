#include <iostream>
#include "Opperate.h"

using namespace std;

int main(){
	Opperate a(20);
	Opperate b(30);
	Opperate c;

	// usually:
	// c.num = a.add(b); //50

	//since we manipulated the "+" opperator
	c = a + b; //c = 50

	cout << c.num << endl;

	return 0;
}