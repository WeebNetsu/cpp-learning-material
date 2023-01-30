#include <iostream>

int main(){
    // create a pointer using "*"
    void* ptr = nullptr; // sets the value of ptr to null
    
    int var = 8;
    void* ptr2 = &var; // stores the memory address of var
    std::cout << ptr2 << std::endl;

    int var2 = 16;
    // you can store specific values in pointers
    double* ptr3 = (double*)&var2; // cast int to double(*)
    *ptr3 = 22.33; // by using "*" you can change the value inside the pointer
    // note: this only works if the pointer is NOT void
    std::cout << *ptr3 << std::endl;

    char* buffer = new char[8]; // stores 8 bytes of memory that can be used later
    char** ptr4 = &buffer; // a pointer referencing another pointer

    delete[] buffer; // deletes the buffer memory (use [] since it is a pointer)

    return 0;
}