// Create a class Counter with an integer data member count. Overload the 
// unary ++ operator to increase the value of count by 1. Create an object 
// and display its value before and after applying ++. 

#include <iostream>
using namespace std;


class Counter{
    int count;

    public:
        Counter(int n){
            count = n ;
        }

        void operator++(int){
            count++;
        }

        void display(){
            cout << "Count : " << count << endl;
        }
};

int main(){
    Counter c(10);

    cout << "Value before using ++ operator " << endl;
    c.display();
    
    c++;

    cout << "Value after using ++ operator " << endl;
    c.display();

    return 0;
}






