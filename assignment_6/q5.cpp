// Create a class Complex with two data members real and imaginary. Overload 
// the + operator to add two complex number objects and display the resulting 
// complex number.
// First number = 3 + 4i 
// Second number = 2 + 5i 
// Result = 5 + 9i 

#include <iostream>
using namespace std;

class Complex{
    int real, imaginary;

    public:
        Complex(int r, int i) : real(r), imaginary(i){}

        Complex operator+(Complex c2){
            int combined_real_val = this->real + c2.real;
            int combined_imaginary_val = this->imaginary + c2.imaginary;
            return Complex(combined_real_val, combined_imaginary_val);
        }

        void display(){
            cout << real << " + " << imaginary << "J" << endl;
        }
};

int main(){
    Complex c1(3, 4);
    Complex c2(2, 5);


    cout << "First Number : ";
    c1.display();
    cout << "Second Number : " ;
    c2.display();

    Complex c3 = c1 + c2;
    cout << "Result = ";
    c3.display();


    return 0;
}






