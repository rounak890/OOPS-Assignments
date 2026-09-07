// 2. Create a class Number with two private data members a and b. Use a friend 
// function to access these members and calculate and display their sum. 
#include <iostream>
using namespace std;

class Demo{
    private:
        int a, b;

        friend void display_sum(Demo);

    public:
        Demo(){
            a = 10;
            b = 20;
        }
};

void display_sum(Demo s){
    cout << "A's Value:- " << s.a << endl;
    cout << "B's Value:- " << s.b << endl;

    cout << "\nSum : " << s.a + s.b;
}

int main(){
    Demo s;
    display_sum(s);

    return 0;
}