#include <iostream>

using namespace std;

int factorialNum(int x){
	/*
		factorial number is something like this
		if x = 5 then:
		5 * 4 * 3 * 2 * 1 = factorial of 5 (which is 120)
	*/
	if(x > 1){
		return x * factorialNum(x - 1); //recursion is when a function calls itself
	}
}

int main(){
	cout << factorialNum(5) << endl;

	return 0;
}