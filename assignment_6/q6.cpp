// Create a class Student with a data member CGPA. Create two student objects 
// and overload the following relational operators: 
//  == to check whether both students have the same CGPA.  
//  > to check which student has the higher CGPA.  
//      Display an appropriate message based on the comparison
#include <iostream>
using namespace std;

class Student{
    float cgpa;

    public:
        Student(float c) : cgpa(c){}

        void operator==(Student s){
            if (this->cgpa == s.cgpa)
                cout << "Both Students have equal CGPA i.e. " << this->cgpa << endl; 
            else
                cout << "Both Students don;t have equal CGPA " << endl; 
        }

        void operator>(Student s){
            if (this->cgpa == s.cgpa)
                cout << "Both Students have equal CGPA i.e. " << this->cgpa << endl; 
            else if (this->cgpa > s.cgpa)
                cout << "First Student have higher CGPA i.e. " << this->cgpa << endl; 
            else
                cout << "Second Student have higher CGPA i.e. " << s.cgpa << endl; 
        }
};

int main(){
    Student s1(8.5), s2(9.0);
    s1 == s2;
    s1 > s2;

    return 0;
}