// C++ program to check whether map is empty or not.

#include <iostream>
#include <map>
using namespace std;

int main()
{

    // defining an empty map
    map<int, string> mp1;

    // checking if the mp1 is empty
    if (mp1.empty()) {
        cout << "mp1 is empty." << endl;
    }
    else {
        cout << "mp1 is not empty." << endl;
    }

    // defining a map and inserting a key value pair
    map<int, string> mp2;
    mp2.insert(make_pair(1, "One"));

    // Checking if mp2 is empty
    if (mp2.empty()) {
        cout << "mp2 is empty." << endl;
    }
    else {
        cout << "mp2 is not empty." << endl;
    }

    return 0;
}
