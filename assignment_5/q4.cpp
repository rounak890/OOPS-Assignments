// Q4. Create a class with overloaded result() functions to display marks in one 
// subject, calculate the average of two subjects, and calculate the average of three 
// subjects.

#include <iostream>
using namespace std;

class Marks{
    public:
        void result(double m){
            cout << "Marks in one subject : " << m << endl;
        }

        void result(double m1, double m2){
            int avg = (m1 + m2) / 2;
            cout << "Avg marks in 2 subjects : " << avg << endl;
        }


        void result(double m1, double m2, double m3){
            int avg = (m1 + m2 + m3) / 3;
            cout << "Avg marks in 3 subjects : " << avg << endl;
        }
};

int main(){
    Marks m;

    m.result(45.5);
    m.result(45.5, 34.2);
    m.result(45.5, 23, 78.9);

    return 0;
}