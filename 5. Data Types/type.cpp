#include <iostream>
#include <climits> // to see the max data something can hold
#include <float.h> // to show us how far we can trust floats

using namespace std;

int main(){
	/*
		unsigned - can only hold positive values
		signed - can hold both negative and positive values
			NOTE: a signed value can only hold half of the unsigned
			eg. unsigned: 5000
				signed: -2500 -> 2500
		short - hold half of the default int size (4-8 bytes by default | -2 billion to 2 billion (default))
		short - -32 768 - 32 767
		long - holds double the default int size
	*/

	short w; 
	int x = 22; // integer (default: 16 bit)
	int32_t u; // 32 bit integer
	long y; // a much bigger integer
	long long z; // a much much bigger integer
	// all of the above can use the 'unsigned' keyword
	unsigned int v = 55; // can only be positive

	cout << "\nshort: " << SHRT_MAX << endl; // the max value that can be stored in a short
	cout << "int: " << INT32_MAX << endl; // 32 bit integer max value
	cout << "long: " << LONG_MAX << endl; // long max value
	cout << "long long: " << LONG_LONG_MAX << endl; // long long max value
	cout << "unsigned long long: " << ULONG_LONG_MAX << endl; // unsigned long long max
	cout << "int64_t: " << INT64_MAX << endl; // 64bit int max value
	cout << "int16_t (min): " << INT16_MIN << endl << endl; // 16bit int min value

	float a = 22.33; //4 bytes
	double b = 90.80; // 8 bytes
	long double c = 3.14159; //16 bytes
	double elong = 7.7E4; // same as saying 7.7 * 10^4 (which is 77000)
	double super_long = (10.0 / 3) * 100000000;
	std::cout << "Hard to read float: " << super_long << std::endl; // output: 3.33333e+08
	// the below code will remove the 'e' and make it easier to read
	std::cout << std::fixed << "Easy to read float: " << super_long << std::endl << std::endl;

	// since floating point values are not trustworthy after a point, the below code
	// will tell us where the accuracy ends after the '.'
	std::cout << FLT_DIG << " digets" << std::endl; // trustworthy up to 6
	std::cout << DBL_DIG << " digets" << std::endl; // double is trustworthy up to 15 digets
	std::cout << LDBL_DIG << " digets" << std::endl << std::endl; // long double is trustworthy up to 18 digets

	string d = "Hello! My name is Netsu.";

	/*
		char - 8 bits	
		char is made to store small numbers and characters

		if you cast an character to an int you get the ordinal value (A = 65)
	*/
	char e = 'A'; //characters comes in '' and not ""
	char f = 65; // returns 'A'
	std::cout << (int)e << std::endl; // returns the ascii value
	std::cout << f << std::endl; // returns a character ('A')

	bool loggedOn = false;
	bool alternative = 1; //true (0 = false)

	cout << d << endl;

	return 0;
}