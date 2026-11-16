// Create a class LibraryAccount with a data member availableBooks and a 
// function issueBook(). Throw an exception if the withdrawal amount exceeds 
// the available balance.

#include <iostream>
using namespace std;

class LibraryAccount{
    int availableBooks;

    public:
    LibraryAccount(int ab) : availableBooks(ab){};

    void issueBook(){
        int books;
        cout << "Enter number of books to issue: ";
        cin >> books;

        if (books > availableBooks || books <= 0) {
            throw "Invalid request or insufficient books available";
        }

        availableBooks -= books;

        cout << "Books issued successfully!" << endl;
        cout << "Remaining books: " << availableBooks << endl;
    }
};

int main(){
    LibraryAccount obj(10);

    try{
        obj.issueBook();
    }
    catch(const char* e){
        cout << e << endl;
    }


    return 0;
}