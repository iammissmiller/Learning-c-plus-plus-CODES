#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159783;

    // Set precision to 5
    cout.precision(5);

    cout << pi << endl;

    // Set precision to 7
    cout.precision(7);

    cout << pi << endl;

    return 0;
}
