/*
   CSC 134
   M2T2 - Apple Sales
   Mahamed Abdel
   1/31/24
*/

#include <iostream>
#include <string> 
#include <limits> 
#include <iomanip>
using namespace std;

int main()
{
    // Declare Variables
    string name;
    int apples;
    double price_each;
    double total;

    
    // Display program title
    cout << "M2T2 - Apple Sales\n";
    
    // Ask user for information
    cout << "Hi, what's your name? ";
     // Clear the input buffer
    cin >> name; // Correctly read names with spaces
    cout << "Welcome to our orchard, " << name << "!\n";
    
    // Ask how many apples they want
    cout << "How many apples do you want? ";
    cin >> apples;
    
    // Ask the price for each (or set a fixed price)
    cout << "What's the price for each apple? $";
    cin >> price_each; // Setting a fixed price for each apple

    
    

    // Do calculations
    total = apples * price_each;
    
    // Print the output
    cout << "\n--- Apple Sales Receipt ---\n";
    cout << "Customer: " << name << endl;
    cout << "Quantity: " << apples << " apples" << endl;
    cout << "Price per apple: $" << price_each << endl;
    cout << "Total cost: $" << total << endl;
    cout << "Thank you for your purchase, " << name << "!" << endl;

    cout << fixed << setprecision(2);

    return 0;
}
