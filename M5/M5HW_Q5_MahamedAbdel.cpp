#include <iostream>
using namespace std;

int main() {
    double speed;
    int time;
    
    // Ask for speed with input validation
    do {
        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;
        if (speed <= 0) {
            cout << "Speed must be a positive number." << endl;
        }
    } while (speed <= 0);

    // Ask for time with input validation
    do {
        cout << "How many hours has it traveled? ";
        cin >> time;
        if (time < 1) {
            cout << "Time must be 1 hour or more." << endl;
        }
    } while (time < 1);
    
    // Display the distance traveled for each hour
    cout << "Hour\tDistance Traveled" << endl;
    cout << "-------------------------" << endl;
    for (int hour = 1; hour <= time; hour++) {
        cout << hour << "\t" << (speed * hour) << endl;
    }

    return 0;
}
