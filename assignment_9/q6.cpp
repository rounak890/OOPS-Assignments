// 6.  Implement a class template Stack using an array. Include functions push(), 
// pop(), and display(). Handle stack overflow and underflow conditions. 

#include <iostream>
using namespace std;

template <typename T>

class Stack{
    T arr[100];
    int n;
    int pos;

    public:
        Stack(int size){
            n = size;
            pos = -1;
        }

        void push(){
            if(pos == n-1){
                cout << "OVERFLOW OCCURED !!!";
                return;
            }

            pos++;
            cout << "Enter the value to be inserted : " ;
            cin >> arr[pos];
        }

        void pop(){
            if(pos == -1){
                cout << "UNDERFLOW OCCURED !!!";
                return;
            }

            cout << "Deleted Value : " <<  arr[pos];
            pos--;
        }

        void display(){
            cout << "\nStack Values :- " ;
            for(int i = 0; i < pos+1; i++){
                cout << arr[i] << ", ";
            }
            cout << endl;
        }

};

int main(){
    Stack<int> s1(3);
    s1.push();
    s1.push();
    s1.push();
    s1.display();
    s1.pop();
    s1.display();

    return 0;
}