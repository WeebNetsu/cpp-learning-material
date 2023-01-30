#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
	ofstream MyFile("file.txt"); //does the same as open();

	if (MyFile.is_open()){ //checks if the file is open (read permissions)
		MyFile << "Text inside file";
		cout << "Text successfully written to file" << endl;
	}else{
		//change the permissions (chmod 000 file.txt) to see this error
		cout << "Error occurred!" << endl;
	}

	MyFile.close();

	return 0;
}