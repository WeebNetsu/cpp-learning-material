#ifndef DOG_H //if not defined
#define DOG_H //define

class Dog{
public:
	Dog(int a, int b); //constructor
	void print();

private:
	int regVar; //regular variable
	const int constVar; //constant variable (The reason for this lesson)
};

#endif //end if statement