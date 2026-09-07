// 3. Create a class Employee with a private data member salary. Create two objects 
// and use a friend function to compare their salaries and display the higher 
// salary. 
#include <iostream>
using namespace std;

class Employee{
    private:
        int salary;
        string name;

        friend void Compare_Salaries(Employee, Employee);

    public:
        Employee(int s, string n){
            salary = s;
            name = n;
        }
};

void Compare_Salaries(Employee e1, Employee e2){
    if (e1.salary > e2.salary){
        cout << e1.name << " has higher salary.";
    }
    else if(e1.salary < e2.salary){
        cout << e2.name << " has higher salary.";
    }
    else{
        cout << e1.name << " and " << e2.name << " has equal salary.";
    }
}

int main(){
    Employee e1(10000, "Ujjwal");
    Employee e2(20000, "Mehul");
    
    Compare_Salaries(e1, e2);

    return 0;
}