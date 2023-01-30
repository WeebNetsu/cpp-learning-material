#include <iostream>

using namespace std;

int main(){
	/*
		char stores 1 byte of data
		bool stores 1 byte of data
		short stores 2 bytes of data
		int stores 4 bytes
		float stores 4 bytes
		double stores 8 bytes

		long stores 4 bytes of data (mostly, but depends on compilier)
		long long stores 8 bytes of data

		unsigned will allow you to add a larger number
	*/
	// to see the size of an data type
	cout << sizeof(int) << endl << endl;

	int num = 10; //like Java, you declare your data type
	int a, b; // you can declare them without giving them values
	a = num - 10;
	b = num + 10;
	
	cout << num + 20 << " loli" << endl; //variables are case sensitive

	int num1 = 9; //integer can store from -2 billion up to 2 billion
	// to work out the max value an int can have, it would be 2^31 (pow(2, 31))
	/*
		A signed integer/number is a number that can be positive or negative (default)
		An unsigned integer/number is a number that can only be positive (absolute value)
		When you create an unsigned int, you increase the max value that can be stored
		inside of it to 2^32
	*/
	unsigned int num2 = -32; //4294967264 (goes back to max since it cannot be < 0)
	cout << num2 << endl;
	unsigned int num3 = 32; //32
	cout << num3 << endl;
	
	// char can be used to either store an aschii value or a character 
	char char1 = 97; //a 
	cout << char1 << endl;
	char char2 = 'A'; 
	cout << char2 << endl;
	// remeber std::string

	short short1 = 65; //65
	cout << short1 << endl;
	short short2 = 'A'; //65 - treats it as an aschii value
	cout << short2 << endl;

	float dnum1 = 3.1415f; //add an "f" to the end to declare that it is a float
	//if no "f" at end, C++ sees it as a double
	cout << dnum1 << endl;
	double dnum2 = 3.14159;
	cout << dnum2 << endl;

	// any number that is NOT 0 is true. ONLY 0 is false
	bool falses = false; // 0
	cout << falses << endl;

	return 0;
}