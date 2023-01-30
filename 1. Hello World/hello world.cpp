//install g++ in terminal to run this in sublime text
//C++ files can be saved as .cpp/.cp/.c

#include <iostream> //this tells the compiler to include a basic input output system (iostream)
using namespace std; //tells code to use the standard (std) namespace
/*
	Without using a namespace, the below code will look like this:
	std:cout << "Hello World!"; (with every line like that)
*/

int main(){ //retruns int & main is the main method (basic java)
	cout << "Hello World!"; //cout (console output) - standard output (screen/terminal)
	//<< - just like in shell, the << inserts data into that (cout is like a default variable)

	return 0;
}