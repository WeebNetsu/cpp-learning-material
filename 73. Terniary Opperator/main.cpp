#include <iostream>

int main(int argc, char const *argv[])
{
    // Basically a one-liner if statement (like in js)
    int x = 2;
    // if x == 2 then opp = "y" else opp = 'n';
    char opp = x == 2 ? 'y' : 'n';
    std::cout << opp << std::endl;

    // doesn't have to be stored in a variable
    x == 5 ? std::cout << "X is 5" << std::endl : std::cout << "X is not 5" << std::endl;

    x = 10;
    // else if statement
    x == 15
        ? std::cout << "X is 15" << std::endl
        : x == 10 ? std::cout << "X is 10" << std::endl : std::cout << "X is not 15 or 10" << std::endl;

    return 0;
}