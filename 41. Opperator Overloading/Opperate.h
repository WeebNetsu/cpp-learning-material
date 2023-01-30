#ifndef OPPERATE_H
#define OPPERATE_H 

class Opperate
{
public:
	int num;
	Opperate();
	Opperate(int); //Constructor but also takes in an int
	Opperate operator+(Opperate); //to change what "+" does
};

#endif