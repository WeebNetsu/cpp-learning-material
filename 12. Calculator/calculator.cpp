#include <iostream>

using namespace std;

int main(){
	int num1, num2, sum;
	cout << "Please insert a number:" << endl;
	cin >> num1;
	cout << num1 << " + (insert number)" << endl;
	cin >> num2;
	sum = num1 + num2;
	cout << num1 << " + " << num2 << " = " << sum;

	return 0;
}