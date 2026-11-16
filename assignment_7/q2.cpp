// Create a base class Animal with a virtual function sound(). Derive classes 
// Dog and Cat that override sound() to display their respective sounds. Call 
// the functions using base-class pointers.

#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void sound(){
            cout << "Animal makes sound" << endl;
        }
};

class Dog : public Animal{
    public:
        void sound(){
            cout << "Dog barks" << endl;
        }
};

class Cat : public Animal{
    public:
        void sound(){
            cout << "Cat meows" << endl;
        }
};

int main(){
    Animal *a;
    Dog d;
    Cat c;

    a = &d;
    a->sound();

    a = &c;
    a->sound();

    return 0;
}
