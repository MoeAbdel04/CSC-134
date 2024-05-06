/*
CSC 134

M7Lab1 - Rectangle Area using header file using ASCII
Mahamed Abdel
5/06/24

*/


#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    double width, length;
    cout << "M7T2 - Custom Rectangle Calculator" << endl;
    
    // Prompt user for width
    do {
        cout << "Enter the width of the rectangle : ";
        cin >> width;
        if (width <= 0) {
            cout << "Invalid input. Please enter a positive number." << endl;
        }
    } while (width <= 0);
    
    // Prompt user for length
    do {
        cout << "Enter the length of the rectangle : ";
        cin >> length;
        if (length <= 0) {
            cout << "Invalid input. Please enter a positive number." << endl;
        }
    } while (length <= 0);

    // Create rectangle with user-defined dimensions
    Rectangle r1(width, length);

    // Display the area of the rectangle
    cout << "Area is: " << r1.getArea() << endl;

    // Draw the rectangle using ASCII characters
    cout << "Rectangle drawn using ASCII characters:" << endl;
    r1.drawRectangle();

    return 0;
}
