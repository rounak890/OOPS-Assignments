// WAP TO CREATE CLASS STUDENT WITH DATA MEMBERS NAME AND ROLLNO. USE DEFAULT 
// CONSTRUCTOR TO INITITLAIZE THESE VALUES AND DISPLAY DETAILS
#include<iostream>
using namespace std;

class Student{
    private:
        int rollNo;
        string name;

    public:
        Student(){
            rollNo = 101;
            name = "Rahul";
        }

        void display_details(){
            cout << "Student Name : " << name << endl;
            cout << "Student Roll Number  : " << rollNo;
        }
};

int main(){
    Student obj1;
    obj1.display_details();


    return 0;
}
