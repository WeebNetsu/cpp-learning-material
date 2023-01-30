#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int mom = 37;
	int son = 99;

	try{
		if (son > mom){
			throw 2; //throws integer error
		}
	}catch(int e){ //catches error
		cout << "Some error occurred! Error: #" << e << endl;
	}

	try{
		if(2 < 5){
			throw "error";
		}
	}catch(...){ //... allows all types of errors (not just integers)
		cout << "Error occurred!";
	}

	return 0;
}