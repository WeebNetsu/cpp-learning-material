#include <iostream>

using namespace std;

class Chef{ //super class
public:
	void makeChicken(){
		cout << "The chef makes chicken" << endl;
	}

	void makeSalad(){
		cout << "The chef makes salad" << endl;
	}

	void makeSpecialDish(){
		cout << "The chef makes bbq ribs" << endl;
	}
};

// Now ItalianChef inherits all the methods from Chef class
class ItalianChef : public Chef{ //sub class
public:
	void makePasta(){
		cout << "The chef makes pasta" << endl;
	}

	//overwriting a function
	void makeSpecialDish(){
		cout << "The chef makes frog feet" << endl;
	}
};

int main(){
	Chef chef;
	chef.makeChicken();
	chef.makeSpecialDish();

	cout << endl;

	ItalianChef iChef;
	iChef.makeSalad(); //works because ItalianChef inherited it from Chef
	iChef.makePasta(); //the ItalianChef can still create his own stuff
	iChef.makeSpecialDish();

	return 0;
}