#include <iostream>
#include <tuple>

// tuple = array that can hold elements of different types in them
int main(int argc, char const *argv[])
{
    // tuple<dataTypes> name(values)
    std::tuple<int, std::string> person(18, "Jack");
    std::cout << std::get<0>(person) << std::endl; // get item at index 0 in tuple
    std::get<0>(person) = 40; // change element in tuple
    std::cout << std::get<0>(person) << std::endl;
    
    std::tuple<int, char, bool> values;
    values = std::make_tuple(22, 'c', true); // set tuple values after declaring it
    std::cout << std::get<1>(values) << std::endl;

    std::tuple<int> empty;
    std::cout << std::get<0>(empty) << std::endl; // default values is 0
    
    std::tuple<int, int> a = std::make_tuple(1, 2); // you can also use make_tuple to declare tuples
    std::tuple<int, int> b(8, 9);
    a.swap(b); // this will swap the values inside tuple a with tuple b
    // NOTE: tuples should have the same types and number of elements to swap
    std::cout << std::get<0>(a) << std::endl; // a[0] is now 8 instead of 1
    std::cout << std::get<1>(a) << std::endl;
    std::cout << std::get<0>(b) << std::endl;
    std::cout << std::get<1>(b) << std::endl;
    
    int c, d;
    std::tie(c, d) = a; // put the values inside a into the c and d variables
    std::cout << c << " " << d << std::endl;
    
    std::tuple<char, int> e('p', 9);
    std::tuple<int, std::string, bool> f(8, "Hello", false);
    std::tuple<char, int, int, std::string, bool> g = std::tuple_cat(e, f); // merges the 2 tuples
    std::cout << std::get<1>(g) << std::endl;
    std::cout << std::get<2>(g) << std::endl;
    std::cout << std::get<3>(g) << std::endl;
    

    return 0;
}