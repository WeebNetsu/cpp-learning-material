#include <iostream>
#include <set>

int main(int argc, char const *argv[])
{
    // set -> unordered list of unique elements
    std::set<char> s1 = {'a', 'b', 'c', 'c', 'a', 'e'};
    s1.insert('L'); // adds 'L' to set
    s1.erase('a');  // removes 'a' from the set

    if (s1.find('c') != s1.end())
    {
        std::cout << "Found 'c' in set" << std::endl;
    }
    else
    {
        std::cout << "Could not find 'c' in set" << std::endl;
    }

    // the below could also be done like this:
    // for(auto i = s1.begin(); i != s1.end(); i++) //* NOTE: try not to use auto in C++!
    for (std::set<char>::iterator i = s1.begin(); i != s1.end(); i++)
    {
        // we get returned a list without any duplicates
        std::cout << *i << std::endl;
    }

    return 0;
}