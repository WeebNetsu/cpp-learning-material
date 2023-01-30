#include <iostream>

using namespace std;

class Book{ //creates a class
	public: //like the public declarations in delphi
		string title, author;
		int pages;

		Book(){ //constructor - gets called whenever you create an object
			cout << "Creating object" << endl;
		}
};

int main(){
	Book myBook; //it's like declaring a variable
	myBook.title = "RE:Zero"; //access the title
	myBook.author = "Nagasaki";
	myBook.pages = 250;
	
	cout << myBook.title << endl;

	Book myBook2; //it's like declaring a variable
	myBook2.title = "Goblin Slayer"; //access the title
	myBook2.author = "Unkown";
	myBook2.pages = 225;

	cout << myBook2.title << endl;

	return 0;
}