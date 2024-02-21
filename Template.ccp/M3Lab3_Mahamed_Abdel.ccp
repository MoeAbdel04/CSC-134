// if statement example2
// standard header


// compiler directives
// (required for the program to run)
#include <iostream>
using namespace std;

// beginning of the main() method
int main() {
  
  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice; 

  // ask the question
  cout << "Are you American or Mexican?" << endl;
  cout << "Type American or Mexican: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You are American" << endl;
  }
  else if (2 == choice) {
  	cout << "You are Mexican" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error


} // main() method