#include <iostream>

using namespace std;

// A recursive function is a function that calls itself

// recursive function that returns a numbers factorials 
// 4s factorials would be 1*2*3*4 and 5s factorial will be 1*2*3*4*5
int factorial(int num){
	if(num == 1){
		return 1; // to stop the recursion
	}else{
		return num * factorial(num-1); //calls itself
		// fact(4) -> 4
		// fact(3) -> 12
		// fact(2) -> 24
		// fact(1) -> 24
	}
}

int main(){
	cout << factorial(4); //24 1*2*3*4

	return 0;
}