#include <iostream> //input output stream
#include <fstream> //opening and working with files

using namespace std;

int main(int argc, char const *argv[])
{
	ofstream MyFile; //create a file object
	MyFile.open("test.txt"); //open/create (if not exist) a file

	//write to a file
	MyFile << "Some\ttext\nfor you"; // overrites the file as well

	MyFile.close(); //closes the file

	return 0;
}