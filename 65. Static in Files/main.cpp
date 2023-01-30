// NOTE FOR TUTORIAL: Don't make one for static variables, they can be used in a lot more ways
#include <iostream>

// this has already been declared global scope inside Static.cpp, so it cannot be declared again
// int normalVar = 10;

// the below code will overwrite the variable for this file only
// static int normalVar = 10;

// NOTE: extern cannot detect static variables... Static variables are private and only usable
// in the file they were created in
extern int normalVar; // imports the global variable from Static.cpp

int main(int argc, char const *argv[])
{
    std::cout << normalVar << std::endl;

    return 0;
}