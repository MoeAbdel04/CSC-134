#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159;

double getPositiveInput(const string& prompt, const string& errorMessage);
double calculateCircleArea(double radius);
double calculateRectangleArea(double length, double width);
double calculateTriangleArea(double base, double height);

int main() {
    int choice;
    double radius, length, width, base, height, area;

    do {
        cout << "Geometry Calculator" << endl
             << "1. Calculate the Area of a Circle" << endl
             << "2. Calculate the Area of a Rectangle" << endl
             << "3. Calculate the Area of a Triangle" << endl
             << "4. Quit" << endl
             << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                radius = getPositiveInput("Enter the circle's radius: ", "The radius cannot be less than zero.");
                area = calculateCircleArea(radius);
                cout << "The area of the circle is: " << fixed << setprecision(5) << area << endl;
                break;
            case 2:
                length = getPositiveInput("Enter the rectangle's length: ", "The length cannot be less than zero.");
                width = getPositiveInput("Enter the rectangle's width: ", "The width cannot be less than zero.");
                area = calculateRectangleArea(length, width);
                cout << "The area of the rectangle is: " << area << endl;
                break;
            case 3:
                base = getPositiveInput("Enter the triangle's base: ", "Only enter positive values for base.");
                height = getPositiveInput("Enter the triangle's height: ", "Only enter positive values for height.");
                area = calculateTriangleArea(base, height);
                cout << "The area of the triangle is: " << area << endl;
                break;
            case 4:
                cout << "Quitting program." << endl;
                break;
            default:
                cout << "The valid choices are 1 through 4. Run the program again and select one of those." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}

double getPositiveInput(const string& prompt, const string& errorMessage) {
    double value;
    do {
        cout << prompt;
        cin >> value;
        if (value <= 0) {
            cout << errorMessage << endl;
        }
    } while (value <= 0);
    return value;
}

double calculateCircleArea(double radius) {
    return PI * radius * radius;
}

double calculateRectangleArea(double length, double width) {
    return length * width;
}

double calculateTriangleArea(double base, double height) {
    return base * height * 0.5;
}
