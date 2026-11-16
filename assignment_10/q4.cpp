// Using stack and Queue - Write a program to demonstrate the operations 
// push(), pop(), and top() using stack, and push(), pop(), and front() using queue. 
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<int> s;
    queue<int> q;

    // Stack operations
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack top: " << s.top() << endl; // Should print 30
    s.pop();
    cout << "Stack top after pop: " << s.top() << endl; // Should print 20

    // Queue operations
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue front: " << q.front() << endl; // Should print 10
    q.pop();
    cout << "Queue front after pop: " << q.front() << endl; // Should print 20

    return 0;
}