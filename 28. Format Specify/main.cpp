#include <iostream>

using namespace std;

int main(){
	/* scanf("format_specifier", &val) format specifiers
	Int ("%d"): 32 Bit integer
	Long ("%ld"): 64 bit integer
	Char ("%c"): Character type
	Float ("%f"): 32 bit real value
	Double ("%lf"): 64 bit real value

	printf("`format_specifier`", val)*/
// int, long, char, float, and double
	int ints;
	long longs;
	char chars;
	float floats;
	double doubles;

	// gets user input
	scanf("%d %ld %c %f %lf", &ints, &longs, &chars, &floats, &doubles);

	//prints the values
	printf("%d\n%ld\n%c\n%f\n%lf", ints, longs, chars, floats, doubles);

	return 0;
}