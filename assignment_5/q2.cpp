//Create a class Area with overloaded calculate() functions to calculate the area of a square, rectangle, and circle.
#include <iostream>
using namespace std;

class Area{
    public:
        void calculate(double s){
            cout << "Area of square : " << s*s << endl;
        }

        void calculate(double l, double b){
            cout << "Area of rectangle : " << l * b << endl;
        }

        void calculate(int r){
            cout << "Area of circle : " << 22/7 * r * r << endl;
        }
};

int main(){
    Area a;

    a.calculate(2.5);
    a.calculate(2, 10);
    a.calculate(10);

    return 0;
}