// Write a C++ program to divide two numbers. If the denominator is zero, 
// throw an exception and handle it using try and catch.

#include <iostream>
using namespace std;

int main(){
    int num, deno;

    cout << "Enter the numerator: " << endl;
    cin >> num;

    cout << "Enter the denominator: " << endl;
    cin >> deno;

    try{
        if (deno == 0){
            throw "Division by zero is not allowed";
        }
        cout << "Division Result: " << num/deno << endl;
    }
    catch(const char* e){
        cout << e << endl;
    }

    return 0;
}