#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
  
      // Increment each element
      for (auto i: v) {
          i++;
    }
  
      // Increment each element using reference
      for (auto& i: v) {
          i++;
    }

    // Iterating through vector
    for (auto& i : v)
        cout << i << " ";
  
    return 0;
}
