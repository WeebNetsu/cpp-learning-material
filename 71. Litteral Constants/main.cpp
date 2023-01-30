#include <iostream>

int main(int argc, char const *argv[])
{
    // if you're having trouble compiling, use this code:
    // g++ main.cpp -o output --std=c++11
    // auto - this is used to auto assign a variable
    auto a = 5;    // auto assigned to 5
    auto b = 5U;   // tells auto it is an unsigned integer
    auto c = 5UL;  // unsigned long
    auto d = 5ULL; // unsigned long long
    auto e = 5.0F; // tells auto it is a float, without the F it will be a double
    auto f = 5.0L; // long double

    return 0;
}