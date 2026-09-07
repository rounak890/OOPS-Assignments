// 5. Create a class BankAccount with: 
// Private data members: 
//  accountNo  
//  balance  
// Static data member: 
//  totalAccounts  
 
// Implement: 
//  A constructor to initialize the account details.  
//  A friend function to display the private account details.  
//  A static member function to display the total number of accounts created.  
 
// Create at least three objects and demonstrate both the friend function and 
// static member function. 

#include<iostream>
using namespace std;

class BankAccount{
    private:
        int accountNo;
        double balance;
    
    public:
        static int totalAccounts;

        BankAccount(int acc_no, double amt){
            totalAccounts++;
            accountNo = acc_no;
            balance = amt;
        }

        friend void display(BankAccount);

        static void display_total_accounts(){
            cout << "Total No. of accounts : " << BankAccount::totalAccounts;
        }
};

int BankAccount::totalAccounts = 0;

void display(BankAccount b){
    cout << "\n------- SHOWING BANK A/C DETAILS ----------" << endl;
    cout << "Bank Account Number :- " << b.accountNo << endl;
    cout << "Balance :- " << b.balance << endl;
}

int main(){
    BankAccount b1(1, 1000);
    BankAccount b2(2, 10000);
    BankAccount b3(4, 40000);

    cout << "DEMONSTRATING FRIEND FUNCTION " << endl;
    display(b3);
    
    cout << "\n\nDEMONSTRATING STATIC MEMBER FUNCTION " << endl;
    BankAccount::display_total_accounts();
    return 0;
}