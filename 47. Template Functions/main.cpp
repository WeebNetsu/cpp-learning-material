#include <iostream>

using namespace std;

/*
	Let's say we want to build a calculator, but we dont want this:
	float add(float x, float y);
	int add(int x, int y);

	Then we can create a template function
*/

template <class myType>

// basically creating own datatype
myType addStuff(myType a, myType b)
{
	return a + b;
}

// swapping arrays
template <typename A> // same as template <class myType>
void swapArrays(A arr1[], A arr2[], int arrSize)
{ // Arrays decay to pointers when passed in, so they don't need to be passed in with references
	for (int i = 0; i < arrSize; i++)
	{
		A temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

int main(int argc, char const *argv[])
{
	int a = 20, b = 30, c;
	c = addStuff(a, b);
	cout << c << endl; //50

	float x = 12.5, y = 7.6, z;
	//one function different data type
	z = addStuff(x, y); //20.1
	cout << z << endl;

	cout << endl;

	int example[] = {1, 2, 3, 4};
	int example2[] = {10, 20, 30, 40};

	for (int i = 0; i < 4; i++)
	{
		cout << example[i] << "\t" << example2[i] << endl;
	}

	swapArrays(example, example2, 4);

	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		cout << example[i] << "\t" << example2[i] << endl;
	}

	return 0;
}