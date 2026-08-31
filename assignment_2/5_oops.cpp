// Write a program to demonstrate constructor overloading using a class Student. Create:
//  a default constructor,
//  a constructor accepting name and roll number,
//  a constructor accepting name, roll number, and CGPA.
// Display the details of objects created using all three constructors.

#include<iostream>
using namespace std;

class Student{
    private:
        int rollNo;
        string name;
        float cgpa;

    
    public:
        Student(){
            rollNo = 0;
            name = "unknown";
            cgpa = 0;
        }

        Student(string n, int r){
            rollNo = r;
            name = n;
        }

        Student(string n, int r, float c){
            rollNo = r;
            name = n;
            cgpa = c;
        }
        

        void display_details(){
            cout << "Student Details" << endl;
            cout << "Name: " << name << endl;
            cout << "RollNo.: " << rollNo << endl;
            cout << "CGPA: " << cgpa << "\n\n" << endl;
        }
    
};


int main(){
    Student s1;
    Student s2("ram", 67);
    Student s3("mohan", 28, 8.3);

    s1.display_details();
    s2.display_details();
    s3.display_details();

    return 0;
}
