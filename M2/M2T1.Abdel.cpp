/*
CSC 134
M2T1 - Receipt
Mahamed Abdel
1/29/24

*/


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    cout << "M2T1" << endl;
    // set up variables
    string meal= "Value Meal";
    // all in $ except the percent
    cout << "Thank you for dining wiht us!" << endl;
    cout << "----------------------" << endl;
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount = 0;
    double total = 0;

    // do calculations
    tax_amount = meal_price * tax_percent;
    total = meal_price + tax_amount;
    
    // print the receipt
    // TODO: make it line up, and fix decimals
    cout << fixed << setprecision(2);

    cout << meal      << "\t$" << meal_price << endl;
    cout << "Tax:"     << "\t\t$" << tax_amount << endl;
    cout << "----------------------" << endl;
    cout << "Total:"   << "\t\t$" << total << endl;

    return 0;

}