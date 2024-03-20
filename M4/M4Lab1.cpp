#include <iostream>

using namespace std;

int main() {
    int width, height;

    
    cout << "Enter the width of the block: ";
    cin >> width;
    cout << "Enter the height of the block: ";
    cin >> height;

    
    for (int i = 0; i < height; i++) { 
        for (int j = 0; j < width; j++) { 
            cout << "* ";
        }
        cout << endl; 
    }

    return 0;
}
