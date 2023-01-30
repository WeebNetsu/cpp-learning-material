#include <iostream>
#include <string> //the string class

int main(){
    std::cout << "Now running" << std::endl;
    //cin - only receives input until it finds a space
    //getline - receives all the input until enter is pressed
    std::string desc;
    std::getline(std::cin, desc);
    std::cout << "You just said: " << desc << std::endl;

    //the code below is the same as saying: std::string myStr = "This is a normal string";
    std::string myStr("This is a normal string");
    std::string copied;
    //the below code is the same as: copied = myStr;
    copied.assign(myStr);
    std::cout << myStr << std::endl;

    //the below code is the same as: std::cout << copied.at[2] << std::endl; 
    std::cout << copied.at(2) << std::endl;

    return 0;
}