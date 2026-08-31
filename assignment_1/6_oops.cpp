// Create a code snippet that illustrates the following: 
// a.  Calling of private member functions inside public member function 
// b.  Access private member functions inside public member function


#include<iostream>
using namespace std;


class Person{
    private:
        int age;
        string name;
        double salary;

        void set_age(int age){
            this->age = age;
        }

    public:
        void set_salary(int sal){
            salary = sal;
        }

        void get_salary(){
            cout << "the salary is " << salary << endl;
        }

        void set_and_get_age(int age){
            set_age(age);
            cout << "the age is " << age << endl;
        }
};

int main(){
    Person p1;
    p1.set_salary(20000);
    p1.get_salary();

    // Access private member functions inside public member function
    p1.set_and_get_age(29);

    return 0;
}