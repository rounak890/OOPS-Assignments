// Create a class Demo that displays a message when its constructor is called and another
// message when its destructor is called. Create multiple objects of the class and observe
// the order in which constructors and destructors execute.


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

int main(){
    Demo d1;
    Demo d2;
    Demo d3;

    return 0;
}