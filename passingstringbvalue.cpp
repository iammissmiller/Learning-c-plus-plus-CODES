#include <iostream>
#include <string>

void printString(std::string str) {
    std::cout << str << std::endl;
}

int main() {
    std::string myString = "Hello, GFG!";
    printString(myString);
    return 0;
}
