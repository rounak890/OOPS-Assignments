// .  Create a C++ program to demonstrate Single Inheritance. 
// Create a base class Person with the following data members: 
// Name 
// Age 
// Create a derived class Student having: 
// Roll Number 
// Course 
// Implement member functions to accept and display the complete details of a 
// student using inheritance. 

#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        int age;
};

class Student : public Person{
    int roll_number;
    string course;

    public:
        void set_student_details(string n, int a, int rno, string c){
            name = n;
            age = a;
            roll_number = rno;
            course = c;
        }

        void display_student_details(){
            cout << "Name : " << name << endl;
            cout << "Age : " << age << endl;
            cout << "Roll Number : " << roll_number << endl;
            cout << "Course : " << course << endl;
        }

};

int main(){
    Student s;
    s.set_student_details("Rounak", 20, 97, "MCA");
    s.display_student_details();

    return 0;
}