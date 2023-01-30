#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	#if 1 //if true then
		cout << "This is true" << endl;
	#endif

	#if 0 //code no longer exists, since it is set to false
		cout << "This is FALSE" << endl;
	#endif

	return 0;
}