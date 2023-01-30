#include <iostream>
#include <cstdlib> //import to use rand() function
#include <ctime> //import time

using namespace std;

int main(){
	// srand() is used to make rand() return more random numbers
	// srand is like the randomize procedure for C++
	// time(0) - will return the current second count
	// if the value in srand doesn't change, then the values rand() returns doesn't either
	// srand(time(0)) will give you a random value each time the code runs
	srand(time(0));
	for(int i = 0; i <= 10; i++){ //to get 10 random numbers
		//NOTE: rand() is not 100% random, each time the code run, you will receive the same numbers
		cout << 1 + (rand() % 10) << endl; //returns random number between (including) 1 and 10
	}

	return 0;
}