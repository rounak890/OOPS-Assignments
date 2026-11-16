//  Write a program to access an element of an array. Throw and handle an 
// exception if the entered index is outside the valid range. 

#include <iostream>
using namespace std;

int main(){
    int ind;
    int n = 5;
    int arr[] = {1, 2, 3 , 4, 5};

    for(int i : arr) cout << i << ", ";

    cout << "\nEnter the index: " ;
    cin >> ind;


    try{
        if (ind >= n || ind < 0){
            throw "out of index error";
        }
        cout << "Value at index " << ind << ": " << arr[ind] << endl;
    }
    catch(const char* e){
        cout << e << endl;
    }

    return 0;
}
