#include <iostream>

using namespace std;

    
    union geek{
        
        int age;
        float GPA;
        double marks;
        
    };

int main()
{

    geek g;
      // Printing size of the union
    cout << sizeof(g) << endl;
    
    // Printing size of all members
    cout << sizeof(g.age) << endl;
    cout << sizeof(g.GPA) << endl;
    cout << sizeof(g.marks);

    
    return 0;
}
