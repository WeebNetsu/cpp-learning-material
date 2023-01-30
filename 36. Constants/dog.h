#ifndef DOG_H
#define DOG_H

class dog
{
private:
	int x;
	mutable int y; // allows variable to be changed inside constant function

public:
	void bark() const; // a constant function
};

#endif