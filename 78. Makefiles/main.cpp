/* 
    Note: makefiles works differently on Windows than on Mac & Linux
    I'll be covering the Mac/Linux way
    sudo apt-get install cmake

    steps to follow:
    create file called: Makefile (or makefile)
    [Inside Makefile]
    outputName: file1.o file2.o
    // the above generates the file object files that will be compiled to outputName
    // g++ -c file1.cpp file2.cpp -> generates object files
    // you then have to indent when adding the commands
        g++ file1.o file2.o -o outputName
    
    // the below is how we link the files
    file1.o: file1.cpp
        g++ -c file1.cpp

    file2.o: file2.cpp
        g++ -c file2.cpp
    
    // the below is optional (it removes object files)
    clean:
        rm *.o outputName


    // once you have created you makefile you can just run "make" inside the terminal
    // to remove object files: make clean
*/

#include <iostream>
#include "utils.hpp"

int main(int argc, char const *argv[])
{
    sayName();
    sayName("Leo");
    std::cout << sum(29, 11) << std::endl;

    return 0;
}