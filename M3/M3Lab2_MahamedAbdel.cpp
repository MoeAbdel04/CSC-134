/*
CSC-134
M3Lab3 - Letter Grade to Numerical
Mahmed Abdel
02/26/2004
*/


#include <iostream>
#include <iomanip> 
#include <sstream> 

using namespace std;


char getLetterGrade(int grade) {
    if (grade >= 90) return 'A';
    if (grade >= 80) return 'B';
    if (grade >= 70) return 'C';
    if (grade >= 60) return 'D';
    return 'F';
}


string createLetterGradeMessage(char letterGrade) {
    stringstream message;
    message << "Your letter grade is: ";
    switch (letterGrade) {
        case 'A': message << "A - Excellent!";
            return message.str();
        case 'B': message << "B - Good job!";
            return message.str();
        case 'C': message << "C - You passed!";
            return message.str();
        case 'D': message << "D - Better luck next time.";
            return message.str();
        case 'F': message << "F - Don't give up!";
            return message.str();
        default: message << "Unknown grade.";
            return message.str();
    }
}

int main() {
    cout << setw(50) << setfill('=') << "" << endl;
    cout << setfill(' ') << setw(30) << "Numerical Grades" << endl;
    cout << setw(50) << setfill('=') << "" << "\n\n";

    int numericalGrade;
    cout << "Please enter your numerical grade (0-100): ";
    cin >> numericalGrade;

    // Validate input
    if (numericalGrade < 0 || numericalGrade > 100) {
        cout << "\nInvalid grade. Please enter a number between 0 and 100.\n";
        return 1; 
    }

    // Calculate and print the letter grade with style
    char letterGrade = getLetterGrade(numericalGrade);
    cout << createLetterGradeMessage(letterGrade);

    return 0;
}
