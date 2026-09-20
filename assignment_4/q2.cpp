// 2.  Create a C++ program to demonstrate Multilevel Inheritance. 
// Create three classes: 
// Person → stores Name 
// Employee → stores Employee ID 
// Manager → stores Department 
// Derive Employee from Person and Manager from Employee. Display all the 
// details of the manager.


#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;

    public:
        Person(string n) : name(n){};

        void display_person(){
            cout << "Name : " << name << endl;
        }
};

class Employee : public Person{
    int employee_id;

    public:
        Employee(string n, int emp_id) : Person(n), employee_id(emp_id){};

        void display_employee(){
            display_person();
            cout << "Employee ID : " << employee_id << endl;
        }
};

class Manager : public Employee{
    string department;

    public:
        Manager(string n, int emp_id, string dept) : Employee(n, emp_id), department(dept){};

        void display_manager(){
            display_employee();
            cout << "Department : " << department << endl;
        }

};


int main(){
    Manager m("Rounak", 97, "Technical");
    m.display_manager();

    return 0;
}