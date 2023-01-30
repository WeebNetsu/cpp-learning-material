#include <iostream>
#include "Dog.h"

using namespace std;

int main(){
	Dog becky;

	cout << "This is what happens before the object deconstructs\n";

	//The deconstructor is automatically called when the main function ends
	return 0;
}