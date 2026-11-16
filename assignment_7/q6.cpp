// Create  a  base  class  Person  with  a  virtual  destructor  and  a  derived  class 
// Student  with  its  own  destructor.  Create  a  dynamically  allocated  Student 
// object  using  a  base-class  pointer  and  delete  it.  Observe  and  explain  the 
// order in which the destructors execute.

#include <iostream>
using namespace std;

class Person{
    public:
        Person(){
            cout << "Constructor of Person"<< endl;
        }

        virtual ~Person(){
            cout << "Destructor of Person"<< endl;
        }
};

class Student : public Person{
    public:
        Student(){
            cout << "Constructor of Student"<< endl;
        }

        ~Student(){
            cout << "Destructor of Student"<< endl;
        }
};

int main(){
    Person *base = new Student();
    delete base;

    return 0;
}

