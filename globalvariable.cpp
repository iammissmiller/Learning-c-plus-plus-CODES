#include <iostream>

using namespace std;


//global variables 

int global = 8;

//global variable accesed from within 
//a function 

void display() {

cout << global << endl;

}

int main() {

display();

//changing value of global from main 

//function before calling display 

global = 10;

display();

return 0;

}