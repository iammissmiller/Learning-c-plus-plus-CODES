#include <iostream>

using namespace std ; 

class calculate {

//access modifiers

public :

// data member

int x = 50;  

int y = 30;

// member function 

int addition() {

int result = x + y;

cout << result << endl;

}

};


int main()

{

//object decleration
calculate add;


// member function calling 

add.addition();

return 0;

}