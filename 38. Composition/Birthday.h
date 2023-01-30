#ifndef BIRTHDAY_H
#define BIRTHDAY_H 

class Birthday{
public:
	Birthday(int d, int m, int y);
	void printDate();

private:
	int month, day, year;
};

#endif