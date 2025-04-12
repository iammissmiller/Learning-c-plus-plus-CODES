#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    // Pushing elements into the queue
    q.push(3);
    q.push(4);
    q.push(5);
    
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
