// C++ Program to find the size of std::set
// using set::size() method
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {11, 13, 56, 67, 89};

    // Find the size using set::size()
    cout << s.size() << endl;

    // Delete the first element of set container
    s.erase(s.begin());

    // Again find the size of set
    cout << s.size();
    return 0;
}
