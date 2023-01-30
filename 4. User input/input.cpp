#include <iostream>
using namespace std;

int main()
{
	cout << "Pick a number...\n";
	int num, a, b;
	cin >> num; //cin (console input) - get user input
	//like in shell, what ever is put in cin will be written in num
	//cin can be chained so one input goes into multiple things: cin >> num >> a >> b

	cout << "The number you chose is " << num << endl;
	cin.ignore(); // so it doesn't interfere with getline()

	string name;
	cout << "What is your name?\n";
	getline(cin, name); //getline can take in an entire line and not just 1 word/number
	cout << "Your name is " << name << endl;

	return 0;
}