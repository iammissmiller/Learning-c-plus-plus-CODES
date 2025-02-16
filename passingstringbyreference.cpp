#include <iostream>
#include <string>

void printString(const std::string& str) { // Note the 'const' to prevent modification
    std::cout << str << std::endl;
}

int main() {
    std::string myString = "welcome to gfg";
    printString(myString);
    return 0;
}
