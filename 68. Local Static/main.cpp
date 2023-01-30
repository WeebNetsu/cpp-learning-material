#include <iostream>

void myFunc()
{
    /* 
        // int i = 0; - this will set 'i' = 0 at the start of the function each time

        static int i = 0; - this will only set i = 0 the first time the function is called
        it is like the 'i' variable has been declared globally, but it can only be accessed by
        this function
     */
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

int main(int argc, char const *argv[])
{
    myFunc();
    myFunc();
    myFunc();
    myFunc();

    return 0;
}