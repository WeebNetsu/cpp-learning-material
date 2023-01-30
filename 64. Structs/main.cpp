#include <iostream>

/*
    A struct is the same as a class, but the difference is, by default the
    attributes inside a class is set to PRIVATE, whilst in a struct it is 
    set to PUBLIC
*/

struct Player{
    void move(){ // public
        std::cout << "Player moved" << std::endl;
    }
};

class Player2{
    void move(){ // private
        std::cout << "Player 2 moved" << std::endl;
    }
};

int main(){
    Player jim;
    jim.move();

    Player2 maggie;
    maggie.move(); // throws error since it is private

    return 0;
}