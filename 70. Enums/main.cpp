#include <iostream>

// an enum is just an integer, but with a name
enum ErrorNo
{           //if you don't give value to these, then it will start at 0 and increment automatically
    A,      // 0
    B,      // 1
    C,      // 2
    D = 95, // 95
    E,      // 96
    F       // 97
};

int main(int argc, char const *argv[])
{
    // value can only be A, B or C..., nothing else
    ErrorNo value = B;

    // if (value == 1) // won't give error, because enum is an integer
    // {
    // }

    enum class Season // normal enum, but it is now scoped
    {
        summer,
        spring,
        fall,
        winter
    }; // numbers 0-3
    // if we didn't scope the enum, the below code would look like this:
    // season now = fall;
    Season now = Season::fall;
    switch (now) // now the enum is easy to use
    {
        // without scoping (using class), the below would look like this:
        // case summer:
    case Season::summer:
        std::cout << ("It is summer") << std::endl;
        break;

    case Season::spring:
        std::cout << ("It is spring") << std::endl;
        break;

    case Season::fall:
        std::cout << ("It is fall") << std::endl;
        break;

    case Season::winter:
        std::cout << ("It is winter") << std::endl;
        break;

    default:
        std::cout << "Error" << std::endl;

        break;
    }

    return 0;
}