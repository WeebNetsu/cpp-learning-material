#include <iostream> //input output stream
#include <fstream> //opening and working with files

using namespace std;

int main(int argc, char const *argv[])
{
	ofstream MyFile, MyFile2; //create a file object
	MyFile.open("test.txt", ios::app); //appends to the end of the file
	/*
		More ways to use ios::
		app - appending
		ate - go to end of file when opening
		binary - open file in binary mode
		in - open file in reading only mode
		out - open file in writing only mode
		trunc - delete file content if it already exists
	*/

	MyFile << "Some\ttext\nfor you\n"; //does not overrite the file since we use ios::app

	MyFile2.open("pleasereadme.txt", ios::app | ios::out); //| allows you to add more than 1 command
	MyFile2 << "Go home, dude!";

	MyFile.close();
	MyFile2.close();

	return 0;
}