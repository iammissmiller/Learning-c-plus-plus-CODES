#include <iostream>
using namespace std;

// class
class A {
public:
    int data;

      // Parameterized constructor with default values
    A(int x = 5) { data = x; }
};

int main() {

    A a1; // Will not throw error

    A a2(25);

    cout << a1.data << endl;
    cout << a2.data;

    return 0;
}
