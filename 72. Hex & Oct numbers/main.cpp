// For more info: https://courses.lumenlearning.com/atd-hostos-introcollegemath/chapter/binary-octal-and-hexadecimal/
#include <iostream>

int main(int argc, char const *argv[])
{
    int num = 30;   // Normal base 10 number
    int hex = 0x30; // Hexadecimal number (16 x 3 = 48)
    int oct = 030;  // octal number (8 * 3 = 24)

    std::cout << num << std::endl;
    std::cout << hex << std::endl;
    std::cout << oct << std::endl;

    // to convert between bases
    std::cout << std::hex << num << std::endl; // convert to hexadecimal
    std::cout << std::oct << num << std::endl; // convert to octal

    return 0;
}