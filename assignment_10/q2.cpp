// Using a List- Write a program using list to insert elements at the beginning 
// and end, remove an element, and display the list.
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    // Insert at beginning
    l.push_front(10);
    l.push_front(5);

    // Insert at end
    l.push_back(20);
    l.push_back(30);

    // Remove an element
    l.remove(10);

    // Display list
    cout << "List elements: ";

    for(int x : l) {
        cout << x << ", ";
    }

    return 0;
}