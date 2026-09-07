#include <iostream>
using namespace std;

class Student{
    public:
    static int count;
};

int Student::count = 0;

int main(){
    Student s;
    cout << Student::count << endl;
    return 0;
}