// 4.  Create a class template ArrayOperations that stores an array of elements and 
// provides functions to display the elements and find the largest element. 

#include <iostream>
using namespace std;

template <typename T>

class ArrayOperations{
    int n;
    T arr[100];

    public:
        ArrayOperations(int size){
            n = size;

            cout << "Enter array elements: ";

            for(int i = 0; i < n; i++){
                cin >> arr[i];
            }
        }

    void display() {
        cout << "Array elements: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void largest() {
        T maxElement = arr[0];

        for (int i = 1; i < n; i++) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }

        cout << "Largest element: " << maxElement << endl;
    }

};

int main(){
    int n;

    cout << "Enter array size: ";
    cin >> n;

    ArrayOperations<int> obj(n);

    obj.display();
    obj.largest();


    return 0;
}