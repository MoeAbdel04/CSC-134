#include <iostream>
using namespace std;

double getDimension(const string& dimensionName) {
    double value;
    do {
        cout << "Enter the " << dimensionName << " of the block (greater than 0): ";
        cin >> value;
        if (value <= 0) {
            cout << "Invalid input. " << dimensionName << " must be greater than 0." << endl;
        }
    } while (value <= 0);
    return value;
}

int main() {
    double width, length, height, volume;

    // Get the dimensions of the block from the user
    width = getDimension("width");
    length = getDimension("length");
    height = getDimension("height");

    // Calculate the volume of the block
    volume = width * length * height;

    // Display the calculated volume
    cout << "The volume of the block is: " << volume << endl;

    return 0;
}
