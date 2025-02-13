#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, char> m = {{1, 'A'}, {2, 'B'}, {3, 'C'},
                  {4, 'D'}, {5, 'E'}};
      
      // Range based for loop to iterate over array
      // and i is used to represent each element 
    for (auto p: m) {
        cout << p.first << ": " << p.second << endl;
    }

    return 0;
}
