#include <iostream>
#include "Birthday.h"

using namespace std;

Birthday::Birthday(int d, int m, int y){
	month = m;
	day = d;
	year = y;
}

void Birthday::printDate(){
	cout << day << "/" << month << "/" << year << endl;
}