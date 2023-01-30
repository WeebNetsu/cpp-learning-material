#include <iostream>

// using namespace std; // can have naming conflicts
using std::cout; // specify what you'll be using it for

int main(int argc, char const *argv[])
{
    cout << "Hello World!" << std::endl; //now I dont have to use std:: before cout

    return 0;
}
