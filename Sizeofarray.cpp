#include <iostream>

using namespace std ;

int main() {
    
    
    int A[] = {1,2,3,4,5,6,8};
    
    cout << "Size of A[0] : " << sizeof(A[0]) << endl ;
    
    cout << "Size of array : " << sizeof(A) << endl ; 
    
    cout << "Length of Array A : " << sizeof(A)/sizeof(A[0]) << endl;
    
    return 0;
}
