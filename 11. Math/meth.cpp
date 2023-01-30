#include <iostream>
#include <cmath> //allows us to use math functions (Math.pow(), Math.PI ect.)

using namespace std;

int main()
{
	int power = pow(5, 2);		//5 to the power of 2
	int square = sqrt(36);		//square root of 36
	int rounded = round(4.5);	//5
	int floored = floor(6.9);	//6
	int ceiled = ceil(1.1);		//2
	int biggest = fmax(2, 10);	//10 (since 10 is bigger than 2)
	int smallest = fmin(2, 10); //2 (since 2 is smaller than 10)

	cout << "Power (5^2): " << power << endl;
	cout << "Square (36): " << square << endl;
	cout << "Round (4.5): " << rounded << endl;
	cout << "Floor (6.9): " << floored << endl;
	cout << "Ceil (1.1): " << ceiled << endl;
	cout << "Fmax (2, 10): " << biggest << endl;
	cout << "Fmin (2, 10): " << smallest << endl;

	// remainder is basically % but it can return floating point values and not just integers
	cout << remainder(10, 3.25) << endl;
	cout << fmod(10, 3.15) << endl; // you can use fmod instead of remainder

	return 0;
}