// Write a C++ program to demonstrate the execution order of constructors and
// destructors when objects are created inside main() and inside a separate function.

#include<iostream>
using namespace std;

class Demo{
    public:
        Demo(){
            cout << "Constuctor Called !!!!" << endl;
        }
        
        ~Demo(){
            cout << "Destructor Called !!!!" << endl;
        }
};

void test(){
    Demo d2;
    Demo d3;
}
int main(){
    cout << "Before Calling Test() function" << endl;
    Demo d1;

    test();
    cout << "After Calling Test() function" << endl;

    return 0;
}