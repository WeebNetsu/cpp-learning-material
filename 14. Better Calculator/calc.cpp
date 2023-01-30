#include <iostream>

using namespace std;

double sum(double num1, double num2){
	return num1 + num2;
}

double minuses(double num1, double num2){
	return num1 - num2;
}

double divide(double num1, double num2){
	return num1 / num2;
}

double times(double num1, double num2){
	return num1 * num2;
}

int main(){
	cout << "p - plus\nm - minus\nd - divide\nt - times\n";
	cout << "What do you want to do: ";

	char mathFunc;
	cin >> mathFunc;

	double num1, num2;
	cout << "First number: ";
	cin >> num1;
	cout << "Second number: ";
	cin >> num2;

	if(mathFunc == 'p'){
		cout << "The Answer: " << sum(num1, num2);
	}else if(mathFunc == 'm'){
		cout << "The Answer: " << minuses(num1, num2); //minus is a reserved function
	}else if(mathFunc == 'd'){
		cout << "The Answer: " << divide(num1, num2);
	}else if(mathFunc == 't'){
		cout << "The Answer: " << times(num1, num2);
	}else{
		cout << "Unknown math opperator: " << mathFunc;
	}

	return 0;
}