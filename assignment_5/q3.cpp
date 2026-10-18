// Q3. Calculate Sum  
// Create a class Calculator with overloaded functions named sum(): 
//  sum(int a, int b) — calculate the sum of two integers. 
//  sum(int a, int b, int c) — calculate the sum of three integers. 
//  sum(double a, double b) — calculate the sum of two decimal numbers. 
 
// Demonstrate all three overloaded functions using an object of the class. 


#include <iostream>
using namespace std;

class Calculator{
    public:
        void sum(int a, int b){
            cout << "Sum of 2 integers : " << a + b << endl;
        }

        void sum(int a, int b, int c){
            cout << "Sum of 3 integers : " << a + b + c << endl;
        }

        void sum(double a, double b){
            cout << "Sum of 2 decimal numbers : " << a + b << endl;
        }

};

int main(){
    Calculator c;

    c.sum(10, 20);
    c.sum(10, 20, 30);
    c.sum(2.3, 4.5);

    return 0;
}