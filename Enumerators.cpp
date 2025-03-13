#include <iostream>
using namespace std;

// Defining enum
enum direction {
    EAST, NORTH, WEST, SOUTH
};

int main() {

    // Creating enum variable
    direction dir = NORTH;
    cout << dir;
    return 0;
}
