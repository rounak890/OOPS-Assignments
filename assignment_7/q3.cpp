// Create  a  base  class  Shape  with  a  virtual  function  area().  Derive  classes 
// Rectangle  and  Circle  that  override  area()  to  calculate  and  display  their 
// respective  areas.  Demonstrate  runtime  polymorphism  using  a  base-class 
// pointer. 

#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void area(){
            cout << "Area function" << endl;
        }
};

class Rectangle : public Shape{
    float length, breadth;

    public:
        Rectangle(float l, float b) : length(l), breadth(b){}

        void area(){
            cout << "Area of Rectangle is : " << length*breadth << endl;
        }
};


class Circle : public Shape{
    float radius;

    public:
        Circle(float r) : radius(r){}

        void area(){
            cout << "Area of Circle is : " << (22.0/7) * (radius) * (radius) << endl;
        }
};

int main(){
    Shape *b;
    Rectangle r(5, 10);
    Circle c(3);

    b = &r;
    b->area();

    b = &c;
    b->area();

    return 0;
}

