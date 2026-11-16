//  Create a class Student that accepts marks in five subjects. Throw exceptions 
// if any mark is outside the range 0–100. Handle invalid input and display the 
// average only when all marks are valid. 
#include <iostream>
using namespace std;

class Student{
    int n = 5;
    int arr[5];

    public:
    void inputMarks(){
        for(int i = 0; i < n; i++){
            cout << "Enter marks for subject " << i+1 << ": ";
            cin >> arr[i];
            if(arr[i] < 0 || arr[i] > 100){
                throw "Invalid marks entered. Marks should be between 0 and 100.";
            }
        }
    }
};


int main(){
    Student s;
    try{
        s.inputMarks();
    }
    catch(const char* e){
        cout << e << endl;
    }

    return 0;
}