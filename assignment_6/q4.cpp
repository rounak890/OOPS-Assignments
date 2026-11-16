// Create a class Number containing an integer data member. Create two objects 
// and overload the following operators: 
//  + to add the values.  
//  - to subtract the values.  
// Display the results of both operations.

#include <iostream>
using namespace std;

class Number{
    int value;

    public:
        Number(int n){
            value = n ;
        }

        Number operator+(Number n2){
            // SINCE THIS IS A CLASS MEMBER FN SO WE DONT NEED TO PASS 2 OBJECTS
            int combined_val = this->value + n2.value;
            return Number(combined_val);
        }

        Number operator-(Number n2){
            int combined_val = this->value - n2.value;
            return Number(combined_val);
        }

        void display(){
            cout << "value : " << value << endl;
        }
};

int main(){
    Number c1(10), c2(20);

    cout << "Value after adding the 2 objects :- " << endl;
    (c1 + c2).display();


    cout << "Value after subtracting the 2 objects :- " << endl;
    (c1 - c2).display();


    return 0;
}
