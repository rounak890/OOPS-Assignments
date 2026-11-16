// Using a vector- Write a C++ program using vector to store five integers, 
// display all elements, and calculate their sum.

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    int sm = 0;
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << ", ";
        sm += v[i];
    }

    cout << "\n\nSum of vector is " << sm;

    return 0;
}



