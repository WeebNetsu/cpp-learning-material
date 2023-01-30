#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

int main(){
	Mother ma;
	//the Daughter executes the same mother constructor because
	//it needs the mother class to be created before it can run, since
	//it is inheriting from the mother class
	Daughter tina;

	return 0;
}