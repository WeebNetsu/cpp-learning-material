#include <iostream>
#include <map>

int main(int argc, char const *argv[])
{
    // maps allows you to create associative data structures (basically key + value pairs)
    //* NOTE: maps are unordered! (but it's faster)
    std::map<char, int> myMap = {{'a', 9}, // key = 'a', value = 9
                                 {'b', 7},
                                 {'c', 5}};

    std::cout << myMap['b'] << std::endl; // returns element at index (key) 'b'
    std::cout << myMap['x'] << std::endl; // key 'x' doesn't exist so we get 0

    myMap['x'] = 500;                     // insert value in map at key 'x'
    std::cout << myMap['x'] << std::endl; // we get 500 since we stored 500 at the key 'x'

    myMap.insert(std::pair<char, int>('d', 3)); // another way to insert a value into a map
    std::cout << myMap['d'] << std::endl;

    myMap.erase('b'); // remove pair from map with key
    std::cout << myMap['b'] << std::endl;

    std::cout << myMap.size() << std::endl; // returns the amount of pairs in map

    // .begin returns a map iterator object, auto would be useful in this situation
    // since a map is not ordered we can't use a normal for loop
    for(std::map<char, int>::iterator i = myMap.begin(); i != myMap.end(); ++i){
        // we get a pointer, so we need to derefrence it inside a ()
        // we can access the key with .first and value with .second
        //* NOTE: for tutorial -> tell them that you receive a special variable and use '->' to point to
        //* access properties of that variable
        std::cout << i->first << ", " << i->second << std::endl; 
    }

    // see if item exists in map
    std::cout << (myMap.find('x') == myMap.end() ? "Item not found" : "Item found") << std::endl;
    

    myMap.clear();                        // removes everything from the map
    std::cout << myMap['x'] << std::endl; // no longer exists since we cleared the map
    //* NOTE: the above code will add 'x' to the map with the value of 0, make sure to remove it before testing if map is empty
    std::cout << myMap.empty() << std::endl; // returns 1 if empty, 0 if not

    return 0;
}