#include <iostream>

void references()
{ // START READING FROM HERE
    int a = 25;
    std::cout << a << std::endl; // a = 25
    int &ref = a;                // not a new variable (like changing the name of variable a to ref)
    ref = 5;                     // since ref is referencing a, a will be changed to 5
    std::cout << a << std::endl; // varible a has now been changed to 5
}

void noReference(int val)
{
    // val is a new variable, so another variable has just been created in the RAM
    val = 25;
}

void yesReference(int &val)
{             // created a reference, so there was no new variable created
    val = 35; // this will actually change the original variable
}

void referenceWithPointers(int *val)
{
    *val = 29; // changes the value in that memory address
}

int main()
{
    references();
    int x = 5;

    noReference(x);
    std::cout << x << std::endl; // x is still 5

    yesReference(x);
    std::cout << x << std::endl; // x is now 35

    referenceWithPointers(&x);
    std::cout << x << std::endl; // x is now 29

    return 0;
}