// Define a class named Complex with properties (real and imaginary) and methods as 
// per following details. 
//  void set () to initialize object values. 
//  void display () to display complex number. 
// Complex sum (Complex) or void sum (Complex) to add two complex numbers 
// (objects of Complex class) and return complex_number (object of Complex 
// class) as result. 
 
// Properties (real and imaginary) of the code should have private access modifier and 
// member functions should have public access modifier in C++ class.


#include<iostream>
using namespace std;


class Complex{
    private:
        int real;
        int imaginary;

    public:
        void set(int r, int i){
            real = r;
            imaginary = i;
        }

        void display(){
            cout << "\nthe complex number is :- " << real << "+" <<imaginary << "J" << endl; 
        }

        Complex sum (Complex c1){
            Complex new_tp;
            new_tp.set(real + c1.real, imaginary + c1.imaginary);
            return new_tp;
        } 
};




int main(){
    // Making first objects
    Complex c1 ;
    int r, i;

    cout << "enter the real part value : ";
    cin >> r;

    cout << "\nenter the imaginary part value : ";
    cin >> i;

    c1.set(r, i);
    c1.display();

    // Making second objects
    Complex c2 ;

    cout << "enter the real part value : ";
    cin >> r;

    cout << "\nenter the imaginary part value : ";
    cin >> i;

    c2.set(r, i);
    c2.display();


    // ADDING BOTH OBJECTS TOGETHER
    Complex result;
    result = c1.sum(c2);

    cout << "\n\n OUtPUT of sum is : " << endl;
    result.display();

    return 0;
}