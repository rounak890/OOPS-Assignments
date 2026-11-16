//  Sorting and searching- Store integers in a vector. Use the STL sort() 
// algorithm to sort them and binary_search() to search for a given value.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v = {10, 32, 4, 678, 12};

    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for(int x : v) {
        cout << x << " ";
    }

    // doing the binary search
    if(binary_search(v.begin(), v.end(), 32)) {
        cout << "\nElement found!";
    } else {
        cout << "\nElement not found!";
    }
}
