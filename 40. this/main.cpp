#include <iostream>

using namespace std;

class Entity{
	public:
	int x, y, z;

	Entity(int x, int y, int z)
		// : x(x), y(y) // you can use an intitalizer list, optional
	{
		// the this reffers to the objects variables
		this->x = x;
		// this is a pointer, so the below will also work
		(*this).y = y;

		Entity* const e = this; // this is if you don't want to be able to reasign this (this = somethingelse)
		e->z = z;
	}
};

int main(){
	// 'this' keyword: only availible to a member function (function part of a class)
	Entity e(10, 5, 13);
	std::cout << e.x << " " << e.y << " " << e.z << std::endl;

	return 0;
}
