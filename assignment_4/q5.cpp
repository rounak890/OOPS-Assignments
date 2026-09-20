// 5.  Create a base class College with a constructor that initializes the College 
// Name. Create a derived class Department with a constructor that initializes 
// the Department Name. 
// Create an object of the derived class and display both college and department 
// information to show the order of constructor execution. 


#include <iostream>
#include <string>
using namespace std;


class College{
    string name;

    public:
        College(string n) : name(n){
            cout << "College Name : " << name << endl;
        }
};

class Department : public College{
    string dept_name;

    public:
        Department(string n, string d) : College(n), dept_name(d){
            cout << "Department Name : " << dept_name << endl;
        }
};


int main(){
    Department d("Thapar Institute of Engineering & Technology", "MCA");

    return 0;
}