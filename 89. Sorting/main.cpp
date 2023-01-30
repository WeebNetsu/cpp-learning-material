#include <iostream>
#include <vector>
#include <algorithm> // to allow us to use sort

int main(int argc, char const *argv[])
{
    std::vector<int> numbers = { 5, 8, 1, 9, 0, 10, 2 };
    std::sort(numbers.begin(), numbers.end()); // this will sort the vector
    for(int number: numbers){
        std::cout << number << std::endl;
    }

    // optionally, you can use a lambda function (or pass in a normal function)
    std::vector<int> numbers2 = { 5, 8, 1, 9, 0, 10, 2 };
    // NOTE: For Tutorial, DO NOT use a lambda, use a normal function (or introduce a lambda)
    std::sort(numbers2.begin(), numbers2.end(), [](int a, int b){ return a > b; }); // this will sort the vector the other way around
    for(int number: numbers2){
        std::cout << number << std::endl;
    }

    return 0;
}