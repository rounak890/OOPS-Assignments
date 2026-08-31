// Write a C++ program that will ask for a temperature in Celsius and display it in 
// degree Fahrenheit.[F=9C/5+32] 


#include<iostream>
using namespace std;

int main(){
    double c, f;

    cout << "Enter the temperature in celcius : ";
    cin >> c;

    f = ((9 * c) / 5) + 32;
    cout << "The temperature in farhenite is " << f;
    return 0;
}