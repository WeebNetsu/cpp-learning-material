#include <iostream>

using namespace std;

class Enemy
{
public:
	//virtual -> tells C++ you'll be using polymorphism
	// this allows you to overwrite the function in a child class
	virtual void attack()
	{
	}
};

class Ninja : public Enemy
{
public:
	// the below "override" is optional, but it specifies that we're overwriting
	// the virtual function
	void attack() override
	{
		cout << "Ninja Chop!" << endl;
	}
};

class Monster : public Enemy
{
public:
	//this will inherit the attack funtion in the enemy
};

int main()
{
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;

	//before you had to change back into the specific type (eg. n.attack())
	//but because we used a virtual function, we can use the enemy object
	enemy1->attack();
	enemy2->attack();

	return 0;
}