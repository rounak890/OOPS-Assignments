// Implement namespace in a program to illustrate the use of same name variables and 
// functions in different sections/libraries of the code. 


#include<iostream>
using namespace std;
namespace ns1{
    int num = 10;
    void display(){
        cout << "Hello from namespace 1" << endl;
    }
};

namespace ns2{
    int num = 100;
    void display(){
        cout << "Hello from namespace 2" << endl;
    }
};

int main(){
    cout << "TRYING FROM NAMESPACE 1:- " << endl;
    cout << "NUM : " << ns1::num << endl;
    ns1::display();

    cout << "\nTRYING FROM NAMESPACE 2:- " << endl;
    cout << "NUM : " << ns2::num << endl;
    ns2::display();


    return 0;
}