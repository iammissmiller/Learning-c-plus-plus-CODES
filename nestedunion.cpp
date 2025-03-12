#include <iostream>
using namespace std;

struct emp{
    
    char name[56];
    
    int id ;
    
    union pay{
        
        float hourlypay;
        float monthlypay;
    }payment;
    
};

int main() {
    
    struct emp e1;
    e1.id = 101;
    
    // Access nested union member
    e1.payment.hourlypay = 300;




    cout << "Employee ID: " << e1.id << " ";
    cout << "Hourly Rate: Rs " << e1.payment.hourlypay;    
    
    return 0;
}
