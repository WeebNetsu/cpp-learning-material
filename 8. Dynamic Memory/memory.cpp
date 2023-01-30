#include <iostream>
using namespace std;

int main(){
	// You can allocate memory for a specific pointer
	int *p = new int; //request memory for this integer
	*p = 5; //store the value once you need it

	cout << *p; //use the value

	delete p; //free up the memory
	//note: delete does not delete the pointer, only the place where it was in the memory

	p = new int; //request memory for it again

	int *x = NULL;
	x = new int[5]; //request memory for an array
	delete [] x; //delete the array stored in x

	return 0;
}