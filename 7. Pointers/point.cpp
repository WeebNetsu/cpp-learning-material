#include <iostream>
using namespace std;

int main(){
	int score = 10;

	//a pointer points to the location of a variable in the ram
	cout << &score; //&score - "&" means point

	//you can also declare a pointer
	int* ip;
	int * ip2;
	int *ip3;
	//all 3 ways can be used to declare a pointer

	int *pScore = &score;

	cout << endl << *pScore << endl; //output = 10 (gets what is stored in that location)
	cout << pScore << endl; //output = the address of score (&score)
	cout << *&score << endl; // output = 10 the * is dereferencing &score (pointer)

	return 0;
}