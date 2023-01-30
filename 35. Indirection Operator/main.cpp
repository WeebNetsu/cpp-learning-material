#include <iostream>
#include "Dog.h"

using namespace std;

int main(){
	Dog becky; //normal dog object
	Dog *beckyPointer = &becky; //pointer dog object

	becky.speak(); //prints Woof!! Woof!!!
	//use a function of an object when using a pointer
	beckyPointer->speak(); //prints Woof!! Woof!!!

	//The deconstructor is automatically called when the main function ends
	return 0;
}