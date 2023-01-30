#include <iostream>

using namespace std;

string numToDay(int day){
	switch(day){
		case(1):
			return "Monday";
		break;

		case(2):
			return "Tuesday";
		break;

		case(3):
			return "Wednesday";
		break;

		case(4):
			return "Thursday";
		break;

		case(5):
			return "Friday";
		break;

		case(6):
			return "Saturday";
		break;

		case(7):
			return "Sunday";
		break;

		default:
			return "Invalid number entered";
		break;
	}
}

int main(){
	cout << numToDay(6);
	return 0;
}