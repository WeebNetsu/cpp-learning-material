#include <iostream>

class Printer
{
private:
    
public:
    Printer();
    Printer(int x);
    ~Printer();
};

Printer::Printer()
{
    std::cout << "Object Created!" << std::endl;
}

Printer::Printer(int x)
{
    std::cout << "Object Created with " << x << std::endl;
    
}

Printer::~Printer()
{
}


class Example
{
private:
    std::string name;
    float x;
    int age;
    Printer pt;
public:
    Example();
    Example(int _age);
    ~Example();

    std::string getName();
    int getAge();
};

Example::Example(){
    this->pt = Printer(12);
}

Example::Example(int _age) 
: name("Unknown"), x(2.5), age(_age), pt(12)
// NOTE: always try to add them in the same order they were created (look in private)
{
    // The above is simmilar to 
    // name = "unknown"
    // The difference is that it is faster since name = "unknown" actually creates a new variable
    // while :name("Unknown") modifies the class variable
}

Example::~Example()
{
}

std::string Example::getName()
{
    return this->name;
}

int Example::getAge()
{
    return this->age;
}


int main(int argc, char const *argv[])
{
    /* Example e(20); // will only create object once since we added it in the initializer list
    std::cout << e.getName() << std::endl;
    std::cout << e.getAge() << std::endl; */
    Example p; // will create the same object twice!

    return 0;
}