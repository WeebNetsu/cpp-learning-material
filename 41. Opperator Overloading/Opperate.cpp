	#include "Opperate.h"
#include <iostream>

Opperate::Opperate(){

}

Opperate::Opperate(int a){
	num = a;
}

//returns a Opperate object (manipulates "+")
Opperate Opperate::operator+(Opperate obj){
	Opperate brandNew;
	// restult = public_variable + parameter
	brandNew.num = num + obj.num;

	return brandNew;
}