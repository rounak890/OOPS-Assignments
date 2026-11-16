// 1.  Write a function template maximum() that accepts two values and returns the 
// greater value. Test it with integers and floating-point numbers. 

#include <iostream>
using namespace std;

template <typename T>

T maximum(T a, T b){
    return (a > b) ? a : b;
}

int main(){
    cout << maximum(100, 20) << endl;
    cout << maximum(2.5, 9.2);

    return 0;
}