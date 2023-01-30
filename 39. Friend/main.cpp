#include <iostream>

using namespace std;

class Example{
public:
	Example(){
		myExp = 0;
	};
	
private:
	int myExp;

	// To give a function outside a class permission to use variables
	// inside the class, call it a friend
	friend void exampleFriend(Example &exp);
};

// because it is a friend of the Example class, it can manipulate private variables inside the
// Example class
void exampleFriend(Example &exp){
	exp.myExp = 99;

	cout << exp.myExp << endl;
}

int main(){
	Example myFriend;

	exampleFriend(myFriend); //99

	return 0;
}