#include <iostream>

using namespace std;

int power(int num1, int num2){
	int temp = 1;

	for(int i = 1; i <= num2; i++){
		temp *= num1;
	}

	return temp;
}

int main(){
	cout << "What number should be exponented: ";
	int num1, num2;
	cin >> num1;
	cout << "To what degree: ";
	cin >> num2;
	cout << "The answer is: " << power(num1, num2);

	return 0;
}