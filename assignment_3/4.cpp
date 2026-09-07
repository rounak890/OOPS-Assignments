// 4. Create a class Student with a static data member to keep track of the number of 
// objects created. Create three objects and display the total number of objects. 
#include<iostream>
using namespace std;

class Student{
    public:
        static int count;

        Student(){
            count++;
        }
};

int Student::count = 0;

int main(){
    Student s1;
    Student s2;
    Student s3;

    cout << "Total number of student objects created: " << Student::count << endl;

    return 0;
}