//  Write a program that accepts an integer and throws different exceptions if 
// the number is negative or greater than 100. Handle both exceptions 
// separately


#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter the number: " << endl;
    cin >> num;


    try{
        if (num > 100)
            throw 101;
        if(num < 0)
            throw "Number can't be negative";

        cout << "Number: " << num << endl;
    }
    catch(int e){
        cout << "Number should be less than or equal to 100";
    }
    catch(const char* e){
        cout << e << endl;
    }

    return 0;
}