// for in [also known as] for each
#include <iostream>

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 6, 8};
    for(int i: arr){ // same as for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
        std::cout << i << std::endl;
    }

    // the above also works with vectors and stl arrays
    

    return 0;
}

void example(int data[]){
    // Since an array decays to a pointer when passed into a function
    // the below code will cause erros 
    /* for(int i : data){
        std::cout << i << std::endl;
    } */
}