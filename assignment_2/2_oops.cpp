// WAP TO CREATE CLASS rectangle, having data members length and breadth.
//  use a parameterized constructor to initialize values and display the area of rectangle
#include<iostream>
using namespace std;

class Rectangle{
    private:
        float length, breadth;

    public:
        Rectangle(float length, float breadth){
            this->length = length;
            this->breadth = breadth;
        }

        void display_area(){
            float area = length * breadth;
            cout << "Area of Rectangle : " << area << endl;
        }
};

int main(){
    float l, b;
    cout << "Enter the length of rectangle: ";
    cin >> l;

    cout << "\nEnter the breadth of rectangle: ";
    cin >> b;

    Rectangle obj(l, b);
    obj.display_area();


    return 0;
}








