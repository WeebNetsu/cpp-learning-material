#include <iostream>
#include "People.h"
//optional since the People.h already includes it
// #include "Birthday.h"

using namespace std;

int main(){
	//composition is when you use an object inside another object
	//such as using birthday object inside people object then only
	//using people object inside the main function.

	Birthday myBday(5, 8, 2002);

	People steve("Stephen", myBday);

	steve.toString(); 

	return 0;
}