#include <iostream>
using namespace std;

int main(){
	int a[5] = {9, 11, 2, 33, 4};
	//get length of array
	cout << "The length of array a is: " << (sizeof(a) / sizeof(*a)) << endl;
	// another way to get the length of an array
	cout << "The length of array a is: " << (sizeof(a) / sizeof(a[0])) << endl;
	int b[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //to make an array without a limit
	a[2] = 99;

	cout << a[2] << " and " << b[4] << endl;

	int multi[2][3] = { //multi dimentional array (arr[rows][columns])
		{2, 4, 5}, //first row
		{1, 2, 6} //second row (both have 3 values (columns))
	};

	cout << multi[0][1] << endl; //4 (row 0; column 1)

	return 0;
}