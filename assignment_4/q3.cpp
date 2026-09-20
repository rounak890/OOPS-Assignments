// 3.  Create a C++ program to demonstrate Multiple Inheritance. 
// Create two base classes: 
// Academic → stores Marks 
// Sports → stores Sports Score 
// Create a derived class Result that inherits from both classes and calculates the 
// total score and displays the result. 


#include <iostream>
#include <string>
using namespace std;

class Academia{
    public:
        double marks;
        Academia(double m) : marks(m){};

        void display_academia(){
            cout << "Marks : " << marks << endl;
        }
};

class Sports{
    public:
        double score;
        Sports(double s) : score(s){};

        void display_sports(){
            cout << "Score : " << score << endl;
        }
};

class Result : public Academia, public Sports{
    double total_score;

    public:
        Result(double m, double s) : Academia(m), Sports(s){
            total_score = marks + score;
        }


        void display_result(){
            display_academia();
            display_sports();
            cout << "Total Score : " << total_score << endl;
        }
};


int main(){
    Result r(23.4, 56.4);
    r.display_result();

    return 0;
}