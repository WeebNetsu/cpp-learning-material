#include <iostream>

using namespace std;

class Book{ //creates a class
	public: //like the public declarations in delphi
		string title, author;
		int pages;

		Book(){ //constructor with inital values
			author = "No author";
			title = "No title";
			pages = 0;
		}

		Book(string title, string author, int pages){ //constructor - gets called whenever you create an object
			this->title = title; //like this.title = title
			this->author = author; 
			this->pages = pages;
		}

		//object functions are auxiliry, accessors and mutator methods
		bool largeBook(){ //sees if book is large
			if(this->pages >= 250){
				return true;
			}

			return false;
		}
};

int main(){
	Book myBook1("Re:Zero", "Nagasaki", 250); 	
	Book myBook2("Goblin Slayer", "Unkown", 225);
	Book myBook3;

	cout << myBook1.largeBook(); // true
	return 0;
}