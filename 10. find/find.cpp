#include <iostream>
using namespace std;

int main(){
	string size = "Very Big";
	cout << size.find('B', 0); //find(What to find, start at what index) (returns the index)
	cout << endl << size.find("ry Bi"); //2 (starts at index 2)
	cout << endl << size.find("baby") << endl; ///returns random number if it does not exist
	cout << size.substr(5, 3); //copies from string size starting at index 5 for 3 spaces ('Big')

	return 0;
}