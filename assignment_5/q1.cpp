// Q1. Create a class Print with overloaded display() functions to display an  integer, a double value, and a string.
#include <iostream>
using namespace std;

class Print{
    public:
        void display(int i){
            cout << "Integer : " << i << endl;
        }

        void display(double d){
            cout << "Double : " << d << endl;
        }

        void display(string s){
            cout << "String : " << s << endl;
        }
};

int main(){
    Print p;
    p.display(10);
    p.display(2.33);
    p.display("Rounak");
    return 0;
}