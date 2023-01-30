#include <iostream>

using namespace std;

// these variables can be used anywhere
int tuna = 50;
int life = 10;

int main(){
	int local = 2; // this variable can only be used inside this function

	cout << tuna << endl;

	int life = 5; 

	cout << life << endl; //5 because life was redeclared inside this function
	cout << ::life << endl; //10 this tells c++ that it should use the global variable and no the local

	return 0;
}