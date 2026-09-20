// 4.  Create a C++ program to demonstrate Hierarchical Inheritance. 
// Create a base class Vehicle containing: 
// Brand 
// Model 
// Create two derived classes: 
// Car → Number of Doors 
// Bike → Engine Capacity 
// Create separate objects of Car and Bike and display their respective details. 

#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    string brand;
    string model;

    public:
        Vehicle(string b, string m) : brand(b), model(m){
            cout << "Vehicle Constructor Called! " << endl;
        }

        void display_vehicle_details(){
            cout << "Brand : " << brand << endl;
            cout << "Model : " << model << endl;
        }
};

class Car : public Vehicle{
    int number_of_doors;

    public:
        Car(string b, string m, int n) : Vehicle(b, m), number_of_doors(n){
            cout << "Car Constructor Called! " << endl;
        }

        void display_car_details(){
            display_vehicle_details();
            cout << "Number of Doors : " << number_of_doors << endl;
        }
};



class Bike : public Vehicle{
    double engine_capacity;

    public:
        Bike(string b, string m, double ec) : Vehicle(b, m), engine_capacity(ec){
            cout << "Bike Constructor Called! " << endl;
        }

        void display_bike_details(){
            display_vehicle_details();
            cout << "Engine Capacity : " << engine_capacity << endl;
        }
};

int main(){
    Car c("Audi", "Q4" , 6);
    c.display_car_details();

    Bike b("Royal Enfield", "Class 350", 120.89);
    b.display_bike_details();


    return 0;
}