// Create a structure in C++ containing the details of Students as details below and a 
// main function to execute the structure.  
//             Data Members(properties): 
//   Name 
// Roll No 
// Degree 
// Hostel 
// CurrentCGPA 
 
// Member Function(behavior): 
// addDetails(); 
// updateDetails(); 
// updateCGPA(); 
// updateHostel(); 
// displaydetails(); 

#include <iostream>
using namespace std;

struct Student{
    // Data Members
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;
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
    // Update CGPA
    void updateCGPA()
    {
    cout << "\nEnter New CGPA: ";
    cin >> currentCGPA;
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
    s.updateCGPA();
    // Update Hostel
    s.updateHostel();

    // Display updated details
    cout << "\nAfter Updating Details:";
    s.displayDetails();

}