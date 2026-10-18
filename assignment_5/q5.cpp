// Q5. Find the Maximum (Moderate) 
// Create a class Maximum with overloaded functions named findMax(): 
//  findMax(int a, int b) — find the greater of two integers. 
//  findMax(int a, int b, int c) — find the greatest of three integers. 
//  findMax(double a, double b) — find the greater of two decimal numbers. 
 
#include <iostream>
using namespace std;

class Maximum{
    public:
        void findMax(int a, int b){
            if(a > b){
                cout << "Greatest of 2 integers : " << a << endl;
            }
            else{
                cout << "Greatest of 2 integers : " << b << endl;
            }
        }

        void findMax(int a, int b, int c){
            if(a > b && a > c){
                cout << "Greatest of 3 integers : " << a << endl;
            }
            else if(b > a && b > c){
                cout << "Greatest of 3 integers : " << b << endl;
            }
            else{
                cout << "Greatest of 3 integers : " << c << endl;
            }
        }

        void findMax(double a, double b){
            if(a > b){
                cout << "Greatest of 2 doubles : " << a << endl;
            }
            else{
                cout << "Greatest of 2 doubles : " << b << endl;
            }
        }

};

int main(){
    Maximum m;

    m.findMax(10, 20);
    m.findMax(10, 20, 30);
    m.findMax(5.43, 3.56);


    return 0;
}