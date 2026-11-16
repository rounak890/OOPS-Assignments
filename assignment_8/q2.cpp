// Write a program to input a person's age. Throw an exception if the age is 
// negative and display an appropriate error message.

#include <iostream>
using namespace std;

int main(){
    int age;

    cout << "Enter the age: " ;
    cin >> age;


    try{
        if (age < 0){
            throw "Age can;t be negative";
        }
        cout << "Age is: " << age << endl;
    }
    catch(const char* e){
        cout << e << endl;
    }

    return 0;
}