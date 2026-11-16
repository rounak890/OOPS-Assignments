// 3.  Implement a class template Calculator that stores two values and provides 
// functions to perform addition, subtraction, multiplication, and division. 

#include <iostream>
using namespace std;

template <typename T>

class Calculator{
    T val1, val2;

    public:
        Calculator(T a, T b) : val1(a), val2(b){}

        void addition(){
            cout << "Addition results :- " << val1 + val2 << endl;
        }

        void subtraction(){
            cout << "Subtraction results :- " << val1 - val2 << endl;
        }

        void multiplication(){
            cout << "Multiplication results :- " << val1 * val2 << endl;
        }

        void division(){
            cout << "Division results :- " << val1 / val2 << endl;
        }
};

int main(){
    Calculator<int> c1(20, 10);
    c1.addition();
    c1.subtraction();
    c1.multiplication();
    c1.division();

    cout << "------------------------------------------------------------------" << endl;

    Calculator<double> c2(5.4, 0.4);
    c2.addition();
    c2.subtraction();
    c2.multiplication();
    c2.division();


    return 0;
}

