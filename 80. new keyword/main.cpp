#include <iostream>

int main(int argc, char const *argv[])
{
    int a = 2; // stores on stack (stack gets cleared as soon you you exit the scope, faster but less size)
    int* b = new int; // stores integer on heap, more space but you have to delete the variables yourself
    delete b; // delete memory from heap (IMPORTANT because not deleting can cause )
    int* c = new int[50]; // stores array on heap
    
    delete c; // YOU MUST DELETE YOUR VARIABLES AFTER USING THEM (if you use new keyword)

    return 0;
}