#include <iostream>

/*
    argc - amount of arguments passed in (this includes the program name)
    const *argv (it's a string) - array of characters taking in the arguments.
        The first index in the array holds the application name
*/
int main(int argc, char const *argv[])
{
    std::cout << argc << std::endl;
    std::cout << argv[1] << std::endl;

    return 0;
}