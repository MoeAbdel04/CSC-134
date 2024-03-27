/*
CSC 134

M5Lab2 - Area Calculator
Mahamed Abdel
3/27/24

*/




#include <iostream>
#include <iomanip>
using namespace std;


double getLength();
double getWidth();
double getArea(double, double);
void displayData(double, double, double);

int main() {
    
    double length,    // The rectangle's length
           width,     // The rectangle's width
           area;      // The rectangle's area

    
    length = getLength();

    
    width = getWidth();

    
    area = getArea(length, width);

    
    displayData(length, width, area);

    return 0;
}


double getLength() {
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}


double getWidth() {
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}


double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    
    cout << setprecision(2) << fixed;
    cout << "\nRectangle Dimensions\n";
    cout << "-----------------------\n";
    cout << left << setw(15) << "Length:" << right << setw(10) << length << " units\n";
    cout << left << setw(15) << "Width:" << right << setw(10) << width << " units\n";
    cout << left << setw(15) << "Area:" << right << setw(10) << area << " square units\n";
    cout << "-----------------------\n";
}





