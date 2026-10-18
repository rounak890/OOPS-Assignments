// Q6. Shopping Bill Generator 
// Create a class Bill with overloaded functions named calculateBill() to calculate: 
//  The bill for one item using quantity and unit price. 
//  The bill for two items using their quantities and prices. 
//  The bill for a bill amount after applying a discount percentage. 
// Use suitable parameter lists and return the final bill amount

#include <iostream>
using namespace std;

class Bill{
    public:
        void calculateBill(int qty, double price){
            double totalAmt = qty * price;
            cout << "Final bill Amount of one item: " << totalAmt << endl;
        }

        void calculateBill(int qty_1, int qty_2, double price_1, double price_2){
            double totalAmt = (qty_1 * price_1) + (qty_2 * price_2);
            cout << "Final bill Amount of two items: " << totalAmt << endl;
        }

        void calculateBill(double billAmt, double discount){
            double discountAmt = billAmt * (discount / 100);
            double totalAmt = billAmt - discountAmt;
            cout << "Final bill Amount after discount: " << totalAmt << endl;
        }
};

int main(){
    Bill b;

    b.calculateBill(10, 34.56);
    b.calculateBill(5, 15, 25.99, 30.50);
    b.calculateBill(900.4, 10);

    return 0;
}