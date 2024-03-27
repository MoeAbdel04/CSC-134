/*
CSC 134
M5Lab1 - Adventure
Mahamed Abdel
3/25/24

*/



#include <iostream>
#include <limits> 
using namespace std;


void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_secret_tunnel();
void choice_attic();
void choice_basement();
void choice_garden();
void choice_leave_mansion();

int main() {
    cout << "M5LAB1 - Choose Your Own Adventure" << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0; // finished with no errors
}

void validateInput() {
    if(cin.fail()) {
        cin.clear(); // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the line
    }
}

void main_menu() {
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: ";
    int choice;
    cin >> choice;
    validateInput();
    switch(choice) {
        case 1: choice_front_door(); break;
        case 2: choice_back_door(); break;
        case 3: choice_go_home(); break;
        case 4: cout << "Ok, quitting game" << endl; return;
        default: cout << "That's not a valid choice, please try again." << endl; main_menu(); break;
    }
}

void choice_front_door() {
    cout << "You try the front door..." << endl;
    cout << "It's locked. " << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "Choose: ";
    int choice;
    cin >> choice;
    validateInput();
    if (choice == 1) {
        choice_back_door();
    } else if (choice == 2) {
        choice_go_home();
    } else {
        cout << "Invalid choice. Returning to main menu." << endl;
        main_menu();
    }
}

void choice_back_door() {
    cout << "You sneak around to the back door and find it slightly ajar..." << endl;
    cout << "Do you:" << endl;
    cout << "1. Enter through the back door" << endl;
    cout << "2. Look for a secret tunnel" << endl;
    cout << "Choose: ";
    int choice;
    cin >> choice;
    validateInput();
    if (choice == 1) {
        choice_secret_tunnel();
    } else if (choice == 2) {
        cout << "You search around the garden and indeed find a hidden entrance to a secret tunnel!" << endl;
        choice_secret_tunnel();
    } else {
        cout << "Invalid choice. Returning to main menu." << endl;
        main_menu();
    }
}

void choice_go_home() {
    cout << "You decide it's best not to tempt fate. As you turn to leave, a mysterious fog envelops you and...\n";
    cout << "You find yourself back at the front gate, as if by magic!" << endl;
    main_menu();
}

void choice_secret_tunnel() {
    cout << "You enter through the secret tunnel, finding yourself in a dark, narrow corridor that leads to the mansion's interior." << endl;
    cout << "Do you:" << endl;
    cout << "1. Proceed to the attic" << endl;
    cout << "2. Go down to the basement" << endl;
    cout << "Choose: ";
    int choice;
    cin >> choice;
    validateInput();
    if (choice == 1) {
        choice_attic();
    } else if (choice == 2) {
        choice_basement();
    } else {
        cout << "Invalid choice. Exploring the tunnel further..." << endl;
        choice_secret_tunnel();
    }
}

void choice_attic() {
    cout << "The attic is filled with old furniture covered in white sheets, and you notice a small window letting moonlight in. There's a chest in the corner." << endl;
    
    choice_leave_mansion();
}

void choice_basement() {
cout << "As you cautiously descend into the basement, the air grows colder. You're surrounded by old trinkets and furniture shrouded in dust." << endl;
cout << "Suddenly, you notice a faintly glowing object at the far end of the room." << endl;
cout << "Do you:" << endl;
cout << "1. Investigate the glowing object" << endl;
cout << "2. Leave the basement and head back to the secret tunnel" << endl;
cout << "Choose: ";
int choice;
cin >> choice;
validateInput();
if (choice == 1) {
cout << "Approaching the object, you realize it's a gemstone emitting a soft, eerie glow. As you touch it, the entire mansion begins to tremble!" << endl;
cout << "Rushing out, you escape just as the mansion collapses behind you. The gem, however, remains in your hand, its glow now brighter." << endl;
choice_leave_mansion();
} else if (choice == 2) {
cout << "Deciding not to tempt fate, you return to the tunnel, wondering what mysteries the mansion still holds." << endl;
choice_secret_tunnel();
} else {
cout << "Invalid choice. Pondering your next move in the basement..." << endl;
choice_basement();
}
}

void choice_garden() {
cout << "You find yourself in a hidden garden overgrown with wildflowers and ivy. In the center lies a fountain, dry and filled with leaves." << endl;
cout << "Do you:" << endl;
cout << "1. Investigate the fountain" << endl;
cout << "2. Return to the mansion's entrance" << endl;
cout << "Choose: ";
int choice;
cin >> choice;
validateInput();
if (choice == 1) {
cout << "Inside the fountain, you discover a key marked with the mansion's crest." << endl;
cout << "With the key in hand, you ponder its purpose. Could it unlock some of the mansion's secrets?" << endl;
// This could lead to new adventures or choices
main_menu(); // For now, let's send the player back to the main menu to decide their next move.
} else if (choice == 2) {
main_menu();
} else {
cout << "Invalid choice. Admiring the garden's untamed beauty..." << endl;
choice_garden();
}
}

void choice_leave_mansion() {
cout << "With the adventure behind you, you leave the mansion's grounds, carrying the memories of your journey." << endl;
cout << "Perhaps you'll return one day to uncover more of its secrets." << endl;
cout << "The end." << endl;
// No more choices to make, so we don't loop back to the main menu
}
