#include <iostream>
using namespace std;

struct Employee {
    int id;

    // Anonymous union
    union {
        float hourlyRate;
        float salary;
    };
};

int main() {
    struct Employee e1;
    e1.id = 101;
    
    // Accessing nested member
    e1.hourlyRate = 300;

    cout << "Employee ID: " << e1.id << " ";
    cout << "Hourly Rate: Rs " << e1.hourlyRate;
    return 0;
}
