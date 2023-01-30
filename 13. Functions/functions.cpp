#include <iostream>

using namespace std;

void sayHello(string name, int age){ //void - does not return anything
	cout << "Hello " << name << ", you are " << age << " years old" << endl; //name and age are parameters
}

double cube(double num){ //returns an int
	return num * num * num; 
}

int sum(int num1, int num2){
	int sum = num1 + num2;
	return sum;
}

void bottom(int num); //if you want to declare a function AFTER the main function

int defaultNum(int num = 3){ //default parameter if none passed in
	return num;
}

int main(){
	sayHello("Lilly", 17);
	bottom(5);

	cout << "The answer is: " << cube(2.0) << endl;
	
	int ans = sum(90, 10);
	cout << "The other answer is: " << ans << endl;

	return 0;
}

void bottom(int num){
	cout << "The bottom is " << num << "m deep" << endl;
}