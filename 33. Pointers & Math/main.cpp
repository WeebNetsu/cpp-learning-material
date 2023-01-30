#include <iostream>

using namespace std;

int main(){
	int arr[5];

	int *ap0 = &arr[0];
	int *ap1 = &arr[1];
	int *ap2 = &arr[2];
	int *ap3 = &arr[3];
	int *ap4 = &arr[4];

	cout << "ap0 is at position " << ap0 << endl;
	cout << "ap1 is at position " << ap1 << endl;
	cout << "ap2 is at position " << ap2 << endl << endl;

	ap0 += 2; //adds 2 to a pointer
	cout << "ap0 is NOW at position " << ap0 << endl;
	//pointer ap0 now points to location ap2 (so ap0 = ap2)


	return 0;
}