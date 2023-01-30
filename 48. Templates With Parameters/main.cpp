#include <iostream>

using namespace std;

template <class firstNum, class secondNum>

firstNum smaller(firstNum x, secondNum y){
	if (x < y){
		return x;
	}else{
		return y;
	}
}

int main(int argc, char const *argv[])
{
	int x = 30;
	float y = 19.5929;

	cout << smaller(x, y) << endl;

	return 0;
}