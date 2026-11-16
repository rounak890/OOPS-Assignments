// 2.  Write a function template swapValues() to exchange two values. 
// Demonstrate it using integers and characters. 

#include <iostream>
using namespace std;

template <typename T>

void swapValues(T a, T b){
    cout << "Value of a (BEFORE SWAP): " << a << endl;
    cout << "Value of b (BEFORE SWAP): " << b << endl;

    T temp = a;
    a = b;
    b = temp;

    cout << "Value of a (AFTER SWAP): " << a << endl;
    cout << "Value of b (AFTER SWAP): " << b << endl;
}

int main(){
    swapValues(100, 20) ;
    cout << "---------" << endl;
    swapValues('A', 'B');

    return 0;
}