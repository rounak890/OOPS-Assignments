// Write a C++ program to create a class Employee with data members name, id, and salary.
// Initialize the data members using a parameterized constructor and display the employee
// details.
#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        string name; 
        float salary;

    public:
        Employee(int id, string name, float salary){
            this->id = id;
            this->name = name;
            this->salary = salary;
        }

        void display_employee_details(){
            cout << "------- EMPLOYEE DETAILS ------------" << endl;
            cout << "Name : " << name << endl;
            cout << "ID : " << id << endl;
            cout << "Salary : " << salary << endl;

        }
};

int main(){
    Employee obj(101, "Rahul", 300000);
    obj.display_employee_details();
    
    return 0;
}