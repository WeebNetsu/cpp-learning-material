#include <iostream>

using namespace std;

class Enemy
{
public:
	/*
		Interfaces are classes that only has virtual functions and other classes
		can inherit the functions
		When creating an interface, all the virtual functions should be = to 0. By doing
		this you tell C++ that the only time the function can be used is when it has been
		implemented in a sub class
	*/

	// This class is an abstract class since it has a pure virtual function in it
	virtual void attack() = 0; // pure virtal function
};

class Ninja : public Enemy
{
public:
	void attack() override
	{
		cout << "Ninja chop!" << endl;
	}
};

class Monster : public Enemy
{
public:
	// since we're using a pure virtal function, we HAVE to overrite it
	void attack()
	{
		cout << "I eat you!" << endl;
	}
};

int main()
{
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;

	enemy1->attack();
	enemy2->attack();

	return 0;
}