/*
CSC-134
M3T3 - rolling dice
Mahmed Abdel
02/21/2004
*/






#include <iostream>
#include <cstdlib> 
#include <ctime> 
#include <string> 

using namespace std;

int main() {
    cout << "Welcome to Monopoly" << endl;
    
    
    srand(time(0));

    string userInput;

    while (true) { 
        cout << "Type 'roll' to roll the dice or 'quit' to exit: ";
        cin >> userInput; 

        
        if (userInput == "quit" || userInput == "Quit") {
            cout << "Thanks for playing!" << endl;
            break; 
        }

        
        if (userInput == "roll" || userInput == "Roll") {
            
            int dice1 = rand() % 6 + 1; 
            int dice2 = rand() % 6 + 1; 
            int roll = dice1 + dice2;

            cout << "You rolled: " << dice1 << " + " << dice2 << " = " << roll << endl;

            
            if (roll == 7) {
                cout << "Advance to Go (Collect $200)" << endl;
            } else if (roll == 11) {
                cout << "Go directly to Jail (Do not pass Go, do not collect $200)" << endl;
            } else {
                cout << "Move " << roll << " spaces." << endl;
            }
        } else {
            cout << "Invalid command. Please type 'roll' to play or 'quit' to exit." << endl;
        }
    }

    return 0;
}
