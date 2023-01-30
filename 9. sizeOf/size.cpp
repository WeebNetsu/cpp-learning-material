#include <iostream>
using namespace std;

int main(){
	// you can see the size of a datatype using the sizeof() command
	cout << "char = " << sizeof(char) << endl;
	cout << "int = " << sizeof(int) << endl;
	cout << "string = " << sizeof(string) << endl;
	cout << "bool = " << sizeof(bool) << endl;
	cout << "float = " << sizeof(float) << endl;

	int x[5];
	cout << "Integer array = " << sizeof(x);
	//array size: datatype * numOfValues (int(4) * 5 = 20)

	return 0;
}