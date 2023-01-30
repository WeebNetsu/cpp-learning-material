#include <iostream>
#include <vector>

void loop(const std::vector<std::string>& names, void(*myFunc)(std::string)){
    // void(*myFunc)(std::string) is a function that will be passed in
    // where myFunc is the name of the function
    // the same could've been done by saying: auto myFunc
    for(std::string name : names){
        myFunc(name);
    }
}

int main(){
    std::vector<std::string> names = { "Jack", "Mike", "Neil", "Josh" };

    // the below is a lambda function, [] -> you can put parameters in there
    // (std::string name) -> same as items.forEach(item), where name is item
    // then in {} you say what it should do
    // this is also known as an anonymous function, sinc it doesn't have a name
    loop(names, [](std::string name) { std::cout << "Hi, " << name << "!" << std::endl; });

    return 0;
}
