// IF you ever want to use this inside a real project to time code, watch this video https://youtu.be/oEx5vGNFrLk
// he covers how to do all this inside a struct andit just makes life so much easier
#include <iostream>
#include <chrono> // allows us to use timing functions

int main(int argc, char const *argv[])
{
    std::chrono::_V2::system_clock::time_point start = std::chrono::high_resolution_clock::now(); // gives us the current time

    for (int i = 0; i < 100000000; i++) // do something time consuming
    {
        
    }

    auto end = std::chrono::high_resolution_clock::now(); // we use auto, because std::chrono::_V2.... is just too long lol!

    std::chrono::duration<float> duration = end - start; // calculate the duration the code took to execute
    std::cout << duration.count() * 1000. << std::endl;

    return 0;
}