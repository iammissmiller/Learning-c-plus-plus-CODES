#include <iostream>
using namespace std;

void findNum (int n) {
      for (int i = 0; i <= 100; i++) {
          if (i == n) {
              cout << "Number in Range [0, 100]";
              
              // This will stop the function here
              return;
        }
    }
      cout << "Number not in Range [0, 100]";
      
      // Final return if the above one is not reached.
      return;
}

int main() {
    int n = 10;

      // Caaling the function
    findNum(n);

    return 0;
}
