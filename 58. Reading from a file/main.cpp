#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	string line;
	ifstream MyFile("test.txt"); //gets input from the file

	while(getline(MyFile, line)){ //reads line from file and puts it in variable
		cout << line << endl;
	}

	MyFile.close();

	return 0;
}