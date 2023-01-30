/*
    stl arrays = standard library arrays
    stl arrays are simmilar to both arrays and vectors
    stl arrays have a set size BUT they know their size (unlike normal arrays)
*/

#include <iostream>
#include <array> // to use an stl array

int main(int argc, char const *argv[])
{
    //array<type, size>
    std::array<int, 5> ages = {20, 42, 13, 19, 37};
    std::cout << ages[0] << std::endl; // get first element in array
    std::cout << ages.size() << std::endl; // get size of array

    return 0;
}