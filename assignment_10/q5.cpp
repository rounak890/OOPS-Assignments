//  Using Map- Create a map to store student roll numbers and names. Allow 
// the user to insert student records, search by roll number, and display all records.

#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> studentRecords;
    studentRecords[1] = "ujjwal";
    studentRecords[2] = "sharma";
    studentRecords[3] = "verma";

    // Display all records
    cout << "Student Records:" << endl;
    for(auto pair : studentRecords) {
        cout << "Roll Number: " << pair.first << ", Name: " << pair.second << endl;
    }

    // Search by roll number
    int rollNumberToSearch;
    cout << "Enter roll number to search: ";
    cin >> rollNumberToSearch;

    auto it = studentRecords.find(rollNumberToSearch);
    if(it != studentRecords.end()) {
        cout << "Student found: " << it->second << endl;
    } else {
        cout << "Student with roll number " << rollNumberToSearch << " not found." << endl;
    }

    return 0;
}

