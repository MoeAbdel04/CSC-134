#include <iostream>
#include <string>
#include <iomanip> // For setprecision and fixed

using namespace std;

int main() {
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3, average;

    // Get the names of the months and the rainfall amounts
    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rainfall1;
    
    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rainfall2;
    
    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rainfall3;

    // Calculate the average rainfall
    average = (rainfall1 + rainfall2 + rainfall3) / 3.0;

    // Display the average rainfall
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches." << endl;

    return 0;
}
