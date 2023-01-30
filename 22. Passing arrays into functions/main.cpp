#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{ //takes in an array
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	// sizeof(arr) / sizeof(data type of array) = length of array
	int arrLength = sizeof(arr) / sizeof(int);
	printArray(arr, arrLength);

	return 0;
}