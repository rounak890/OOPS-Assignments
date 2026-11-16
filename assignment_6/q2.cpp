// Create a class Number with an integer data member value. Overload the 
// unary -- operator to decrease the value of the object by 1. Display the value 
// before and after applying the operator.


#include <iostream>
using namespace std;


class Number{
    int value;

    public:
        Number(int n){
            value = n ;
        }

        void operator--(int){
            value--;
        }

        void display(){
            cout << "value : " << value << endl;
        }
};

int main(){
    Number c(10);

    cout << "Value before using -- operator " << endl;
    c.display();
    
    c--;

    cout << "Value after using -- operator " << endl;
    c.display();

    return 0;
}






