/*
CSC 134

M6Lab1 - Buckshot roulette
Mahamed Abdel
4/10/24

*/



#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int MAG_SIZE = 6; // Size of the magazine

int resetMagazine(int magazine[], int size) {
    fill_n(magazine, size, 0);
    int liveShellPosition = rand() % size; // Assign a random chamber to be live
    magazine[liveShellPosition] = 1;
    return liveShellPosition;
}

string printHeader(const string& headerText) {
    string header = string(60, '-') + "\n" + 
                    setw(30 + headerText.size() / 2) + headerText + "\n" +
                    string(60, '-') + "\n";
    return header;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    int magazine[MAG_SIZE] = {0};
    int playerLosses[2] = {0};
    int playerTurn = 0;
    char playAgain;

    cout << printHeader("Welcome to Buckshot Roulette!");

    do {
        int liveShellPosition = resetMagazine(magazine, MAG_SIZE);
        playerLosses[0] = playerLosses[1] = 0;
        playerTurn = 0; // Player 1 starts (represented by 0)

        while (playerLosses[0] < 3 && playerLosses[1] < 3) {
            cout << "Player " << playerTurn + 1 << "'s turn. Press Enter to spin the magazine and pull the trigger...";
            cin.get(); // Wait for enter

            int currentChamber = rand() % MAG_SIZE; // Spin to a random chamber

            if (magazine[currentChamber] == 1) {
                cout << "*** BANG! Player " << playerTurn + 1 << " hits a live round! ***" << endl;
                playerLosses[playerTurn]++;
                if (playerLosses[playerTurn] < 3) {
                    cout << "Player " << playerTurn + 1 << " has " << playerLosses[playerTurn] << " hit(s)." << endl;
                } else {
                    cout << "*** Player " << playerTurn + 1 << " has been hit 3 times and loses the game. ***" << endl;
                    break; // End the game if a player loses 3 times
                }
                liveShellPosition = resetMagazine(magazine, MAG_SIZE);
            } else {
                cout << "Click. It's a blank shell. Player " << playerTurn + 1 << " is safe." << endl;
            }
            
            cout << endl;
            playerTurn = (playerTurn + 1) % 2; // Switch player turns
        }

        cout << printHeader("Game Over");

        // Ask if the players want to play again
        cout << "Would you like to play again? (Y/N): ";
        cin >> playAgain;
        cin.ignore(); // Clear the newline character from the stream

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << printHeader("Thank you for playing!");
    return 0;
}
