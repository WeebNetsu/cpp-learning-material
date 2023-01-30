#include <iostream>

using namespace std;

template <class T>
class myClass
{
public:
	myClass(T x){ //if character, special template should be called
		cout << x << " is NOT a character" << endl;
	}
};

template <> //for template specialization
class myClass<char>{ //if a character was inserted
public:
	myClass(char x){
		cout << x << " IS a character" << endl;
	}
};

int main(int argc, char const *argv[])
{
	myClass<int> oppai1(24);
	myClass<int> oppai2(2);
	myClass<string> oppai3("lol");
	myClass<char> oppai4('l');

	return 0;
}