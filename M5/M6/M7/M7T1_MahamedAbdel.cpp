/*
CSC 134

M7T1 - Classes
Mahamed Abdel
5/01/24

*/





#include <iostream>
using namespace std;

// Restaurant class to store and manage restaurant ratings
class Restaurant {
private:
    string name;    // Name of the restaurant
    double rating;  // Rating from 0 to 5 stars

public:
    // Constructor initializes the name and rating of the restaurant
    Restaurant(string n, double r) : name(n), rating(r) {}

    // Setter for name
    void setName(string n) {
        name = n; 
    }

    // Setter for rating
    void setRating(double r) {
        rating = r;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Getter for rating
    double getRating() const {
        return rating;
    }

    // Print formatted restaurant information
    void printInfo() {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
    }
};

int main() {
    cout << "Diner Dash - Restaurant Reviews" << endl;
    
    // Create restaurant objects
    Restaurant cafe("The Green Terrace", 4.2);
    Restaurant diner("Ocean View Cafe", 3.5);
    Restaurant bistro("Starlight Bistro", 4.7); // New restaurant added

    // Print review information
    cout << "Review Information:" << endl;
    cout << "Cafe:" << endl;
    cafe.printInfo();
    cout << "Diner:" << endl;
    diner.printInfo();
    cout << "Bistro:" << endl;
    bistro.printInfo();  // Display information for the new restaurant

    return 0;
}
