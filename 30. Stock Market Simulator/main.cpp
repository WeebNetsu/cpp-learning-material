#include <iostream>
#include <cmath> //to use stuff like math.pow and math.sqrt

using namespace std;

int main(){
	//float is less accurate but faster than double (double = 64-bit; float = 32-bit)
	float a; //amount (how much money did we make)
	float p = 10000; //principle amount (how much money was invested)
	float r = 0.01; //rate (how much interest to earn each day)

	for (int day = 1; day <= 20; day++){
		a = p * pow(1+r, day);
		cout << day << " ------- "<< a << endl;
	}

	//in the new C++ versions, you don't need a return 0; at the end of the main() function
}	