// Differentiate between private and public access/scope. Perform the question no. 4 
// with class instead of structure with having the data members private and some 
// member functions in private scope and some in public scope


#include<iostream>
using namespace std;

// Private access specifier is one whose value can only be accessed within the class itself
// Public access specifiers is used to define members which can be openly access by any part of program without any restriction

class Student{
    // Data Members
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    // Update CGPA
    void updateCGPA()
    {
        cout << "\nEnter New CGPA: ";
        cin >> currentCGPA;
    }
    

    public:
        // Add student details
        void addDetails()
        {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
        cout << "Enter Current CGPA: ";
        cin >> currentCGPA;
        }

        // Update complete student details
        void updateDetails()
        {
        cout << "\nEnter New Name: ";
        cin >> name;
        cout << "Enter New Roll No: ";
        cin >> rollNo;
        cout << "Enter New Degree: ";
        cin >> degree;
        }

        // Update Hostel
        void updateHostel()
        {
        cout << "\nEnter New Hostel: ";
        cin >> hostel;
        }
        // Display student details

        void displayDetails()
        {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name : " << name << endl;
        cout << "Roll No : " << rollNo << endl;
        cout << "Degree : " << degree << endl;
        cout << "Hostel : " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA <<
        endl;
        }

        void access_pvt_update_cgpa(){
            updateCGPA();
        }
};

int main(){
    // Create an object of Student
    Student s;
    // Add details
    cout << "Enter Student Details" << endl;
    s.addDetails();
    // Display details
    s.displayDetails();


    // Update CGPA
    // s.updateCGPA(); // THIS WILL GIVE ERROR AS THE FUNCTION IS PVT NOW, SO ACCESS IT BY PUBLIC MEMBVER FUNCTION
    s.access_pvt_update_cgpa();


    // Update Hostel
    s.updateHostel();

    // Display updated details
    cout << "\nAfter Updating Details:";
    s.displayDetails();

}