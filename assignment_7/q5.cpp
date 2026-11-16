// Create  a  base  class  Vehicle  with  a  virtual  function  displayInfo().  Derive 
// classes  Car,  Bike,  and  Bus,  and  override  the  function  in  each  class  to 
// display  the  vehicle's  details.  Demonstrate  runtime  polymorphism  using  a 
// base-class pointer

#include <iostream>
using namespace std;

class Vehicle{
    protected:
    string brand, model;

    public:
        Vehicle(string b, string m) : brand(b), model(m) {}

        virtual void displayInfo(){
            cout << "Vehicle Details" << endl;
        }
};


class Car : public Vehicle{
    public:
        Car(string b, string m) : Vehicle(b, m) {}

        void displayInfo() override{
            cout << "Car Brand : " << brand << endl;
            cout << "Car Model : " << model << endl;
        }
};

class Bike : public Vehicle{
    public:
        Bike(string b, string m) : Vehicle(b, m) {}

        void displayInfo() override{
            cout << "Bike Brand : " << brand << endl;
            cout << "Bike Model : " << model << endl;
        }
};


class Bus : public Vehicle{
    public:
        Bus(string b, string m) : Vehicle(b, m) {}

        void displayInfo() override{
            cout << "Bus Brand : " << brand << endl;
            cout << "Bus Model : " << model << endl;
        }
};



int main(){
    Vehicle *base;

    Car c("Ford", "Endeavour");
    Bike b("Royal Enfilled", "Classic 350");
    Bus bu("Vovle", "Bus-345");

    base = &c;
    base->displayInfo();

    base = &b;
    base->displayInfo();

    base = &bu;
    base->displayInfo();

    return 0;
}

