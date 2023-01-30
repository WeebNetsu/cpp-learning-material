#include "Dog.h"
#include <iostream>

using namespace std;

Dog::Dog(int a, int b)
//if you have a constant variable, you have to do this to set your variables
: regVar(a), constVar(b) //regVar = a; constVar = b
{ //class::function

}

void Dog::print(){
	cout << "regVar is: " << regVar << endl;
	cout << "constVar is: " << constVar << endl;
}