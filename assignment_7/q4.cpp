// Create a base class Employee with data members name and basicSalary and 
// a  virtual  function  calculateSalary().  Derive  classes  PermanentEmployee 
// and ContractEmployee that calculate salary differently. Call the overridden 
// functions using a base-class pointer.

#include <iostream>
using namespace std;

class Employee{
    protected:
    string name;
    float basicSalary;

    public:
        Employee(string n, float bs):name(n), basicSalary(bs){}

        virtual void calculateSalary(){
            cout << "Base class fn to calc. salary" << endl;
        }
};

class PermanentEmployee : public Employee{
    public:
        PermanentEmployee(string n, float bs) : Employee(n, bs){}

        void calculateSalary()override{
            cout << "Name : " << name << endl;
            cout << "Salary : " << basicSalary + (0.25 * basicSalary)  << endl;
        }
};

class ContractEmployee : public Employee{
    public:
        ContractEmployee(string n, float bs) : Employee(n, bs){}

        void calculateSalary()override{
            cout << "Name : " << name << endl;
            cout << "Salary : " << basicSalary + (0.05 * basicSalary)  << endl;
        }
};

int main(){
    Employee *e;
    PermanentEmployee pe("rounak", 90000);
    ContractEmployee ce("Shaym", 90000);

    e = &pe;
    e->calculateSalary();

    e = &ce;
    e->calculateSalary();

    return 0;
}

