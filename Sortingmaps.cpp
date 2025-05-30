// C++ Program to implement Map
// with External Sorting
// Criteria / Comparator
#include <bits/stdc++.h>
using namespace std;

// Comparator Function
struct cmp {
	bool operator()(int a, int b) const { return a > b; }
};

int main()
{
	// Declaration of Map
	map<int, int> m1;

	// Insert element in map
	// m[i]=x Here, i is the key and m[i] is the value of
	// the map
	m1[0] = 5;
	m1[1] = 6;
	m1[2] = 7;
	m1[3] = 8;
	m1[4] = 9;

	// Without using External sorting criteria on map it
	// looks like
	for (auto& it : m1) {
		cout << it.first << "->" << it.second << endl;
	}
	cout << endl;

	// If we use External sorting Criteria on map
	// then we have to take one more extra data type in map
	// along with key and value of the map
	map<int, int, cmp> m2;

	// Here cmp is a user define data type in which we
	// define our external sorting function
	m2[0] = 5;
	m2[1] = 6;
	m2[2] = 7;
	m2[3] = 8;
	m2[4] = 9;

	// using External sorting criteria on map it looks like
	for (auto& it : m2) {
		cout << it.first << "->" << it.second << endl;
	}

	return 0;
}
