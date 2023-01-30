#include <iostream>

using namespace std;

// function overloading allows you to make the same function take in different types of arguments
void makeStr(int num){
	cout << "The integer is: " << num << endl;
}

void makeStr(double num){
	cout << "The double is: " << num << endl;
}
/*
	Note:
	int example(int num){}
	can NOT be overloaded with
	float example(int num){}

	To overload a function you have to change the parameters in some way, not only the return type
*/

int main(){
	makeStr(12);
	makeStr(13.56);

	return 0;
}