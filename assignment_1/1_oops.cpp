// Write a program (WAP) to display "Hello World" on console display. WAP to 
// implement the following control characters: 
// ‘\n’ is for new line, or you can use endl – cout<<endl<<“message”; 
// ‘\t’ is for tab ; ‘\a’ is an alarm sound; ‘\r’ is carriage return to go to the beginning of 
// the current line 


#include<iostream>
using namespace std;

int main(){
    cout << "Hello World!!!";

    cout << "\n hello" << endl;
    cout << "\t hello \t world";
    cout << "\a teying out alarm";
    cout << "Hello World\r bye";
    return 0;
}