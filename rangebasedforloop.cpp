#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
      
      // Range based for loop to iterate over array
      // and i is used to represent each element 
    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}
