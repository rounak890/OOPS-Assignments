// 5.  Create a class template Pair that stores two values, which may have different 
// data types. Implement functions to display both values. Test it with an 
// integer and a string. 

#include <iostream>
using namespace std;

template <typename T1, typename T2>

class Pair{
    T1 a;
    T2 b;

    public:
        Pair(T1 val1, T2 val2) : a(val1), b(val2){}

        void display(){
            cout << "Value 1 : " << a << endl;
            cout << "Value 2 : " << b << endl;
        }

};

int main(){
    Pair<int, string> p1(10, "Hello");
    p1.display();

    cout << "-----------------" << endl;

    Pair<string, int> p2("Age", 25);
    p2.display();

    return 0;
}
