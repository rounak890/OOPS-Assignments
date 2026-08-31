// 4. Create a class Box with data members length, width, and height. Implement:
//  a default constructor,
//  a parameterized constructor,
//  a function to calculate and display volume.

#include<iostream>
using namespace std;

class Box{
    private:
        float length, width, height;
    
    public:
        Box(){
            length = 1;
            width = 1;
            height = 1;
        }

        Box(float length,float width,float height){
            this->length = length;
            this->width = width;
            this->height = height;
        }

        void display_volume(){
            float vol = length * width * height;
            cout << "Volume of Box is : " << vol << endl;
        }
    
};


int main(){
    cout << "-------- DEFAULT CONSTRUCTOR --------" << endl;
    Box b1;
    b1.display_volume();

    cout << "\n-------- PARAMETERIZED CONSTRUCTOR --------" << endl;
    Box b2(6, 4, 3);
    b2.display_volume();

    return 0;
}
