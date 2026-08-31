// Create a class Complex with real and imaginary data members. Implement:
//  a default constructor,
//  a parameterized constructor,
//  a display function.


#include<iostream>
using namespace std;

class Complex{
    private:
        float real, imaginary;

    public:
        Complex(){
            real = 1;
            imaginary = 1;
        }

        Complex(float r, float i){
            real = r;
            imaginary = i;
        }

        void display(){
            cout << "------- DISPLAYING COMPLEX NUMBER -------" << endl;
            cout << "Real : " << real << endl;
            cout << "Imaginary : " << imaginary << endl;
            cout << "Complex No. " << real << " + " << imaginary << "j\n\n" << endl;
        }

};

int main(){
    Complex c1;
    Complex c2(2, 7);

    c1.display();
    c2.display();

    return 0;
}