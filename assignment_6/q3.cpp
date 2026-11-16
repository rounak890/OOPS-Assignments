//  Create a class Number containing an integer data member value. Create two 
// objects and overload the binary + operator to add the values stored in the two 
// objects. Display the result
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

        void display(){
            cout << "value : " << value << endl;
        }
};

int main(){
    Number c1(10), c2(20);

    Number combined = c1 + c2;

    cout << "Value after adding the 2 objects :- " << endl;
    combined.display();

    return 0;
}






