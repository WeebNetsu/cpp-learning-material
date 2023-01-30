#include <iostream>

struct Entity{ // like a class but everything is public by default
    static int x, y;

    // NOTE: Static functions can NOT access non-static variables/functions
    void printItems(){
        std::cout << x << ", " << y << std::endl;
    }
};

// since they're static you need to declare them globally
int Entity::x;
int Entity::y;

int main(int argc, char const *argv[])
{
    Entity e1;
    e1.x = 2;
    e1.y = 10;

    // Entity e2 = {5, 9}; // add the 2 easily (only works with non-static)
    // since they're static, you can refer to them like this since there doesn't 
    // have to be an instance of the entity object to use them
    Entity e2;
    Entity::x = 10;
    Entity::y = 19;

    // both of these below will return the same output since static variables in a class/struct
    // will result in there only being ONE instance of that variable in the class
    e1.printItems();
    e2.printItems();

    return 0;
}
