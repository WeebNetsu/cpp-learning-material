#include <iostream>
#include <vector> // so you can use them :)

int main(int argc, char const *argv[])
{
    // vector is like array but with dynamic sizing
    std::vector<int> data = {1, 4, 19}; // create basic vector
    data.push_back(69);                 // adds data to vector

    for (int i = 0; i < data.size(); i++) // data.size() returns the lenght of the vector
    {
        std::cout << data[i] << std::endl;
    }

    data.pop_back(); //removes last element in vector

    std::cout << data.max_size() << std::endl; // returns the max size the vector can be
    std::cout << data.capacity() << std::endl; // returns storage size of vector
    std::cout << data.size() << std::endl;     // returns the size (length) of vector
    data.resize(9);                            // resizes vector
    std::cout << data.size() << std::endl;     // length is now more
    std::cout << data.empty() << std::endl;    // returns true if vector is empty
    data.shrink_to_fit();                      // shrink vector to fit max_size it can be
    std::cout << data.at(1) << std::endl;      // same as saying data[1]
    std::cout << data.front() << std::endl;    // returns first element in vector
    std::cout << data.back() << std::endl;     // returns last element in vector (0 because we resized it)

    data.assign(2, 10); // replaces all old values with two 10's
    std::cout << std::endl;
    for (int i = 0; i < data.size(); i++) // data.size() returns the lenght of the vector
    {
        std::cout << data[i] << std::endl;
    }

    data.clear(); // removes all elements in vector
    std::cout << data.size() << std::endl;

    // 2D vector:
    std::vector<std::vector<int>> numbers = { {1, 2, 3},
                                              {4, 5, 6},
                                              {7, 8, 9} };

    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = 0; j < numbers[i].size(); j++)
        {
            std::cout << numbers[i][j] << "\t"; // output the values in vector
        }
        std::cout << std::endl;
    }

    // ! Do not include in tutorial
    // you can use data.reserve(3) to reserve 3 spaces, so the vector doesn't have to resize every time it gets a new element
    // More info: https://youtu.be/HcESuwmlHEY

    return 0;
}