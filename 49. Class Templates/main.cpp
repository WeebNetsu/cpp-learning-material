#include <iostream>

using namespace std;

template <class T>
class myClass
{
public:
	T first, second;
	myClass(T a, T b){
		first = a;
		second = b;
	}

	T bigger(); //only declare a function inside the class
};

template <class T> //since we'll be defining the function that is inside that class
T myClass<T>::bigger(){ //<T> is to tell C++ that we'll be editing the template inside myClass
	return (first > second ? first : second);
}

int main(int argc, char const *argv[])
{
	myClass<int> jack(20, 10); //we have to specify the data type we work with if we're using templates
	cout << jack.bigger() << endl;

	return 0;
}