// WAP to demonstrate for, while, do-while (with all possible variations), like for loop 
// can be demonstrated without giving initialization in for construct or without giving 
// increment in for construct.  

#include<iostream>
using namespace std;

int main(){
    cout << "Trying out simple FOR LOOP" << endl ;
    for (int i=0; i<5; i++){
        cout << i << ", ";
    }

    cout << "\nTrying out simple FOR LOOP WITHOUT INITIALIZATION" << endl ;
    int i = 0;
    for (; i<5; i++){
        cout << i << ", ";
    }
    
    cout << "\nTrying out simple FOR LOOP WITHOUT INITIALIZATION & INCREMENT" << endl ;
    i = 0;
    for (; i<5; ){
        cout << i << ", ";
        i++;
    }

    cout << "\nSimple entry controlled while loop" << endl;
    i = 0;
    while (i<5){
        cout << i << ", ";
        i++;
    }

    cout << "\nSimple entry controlled DO WHILE loop" << endl;
    i = 0;
    do{
        cout << i << ", ";
        i++;
    }
    while (i > 5);
    

    return 0;
}