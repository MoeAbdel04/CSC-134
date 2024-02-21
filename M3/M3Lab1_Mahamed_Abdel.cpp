
//CSC-134
//M3Lab1
//Mahamed Abdel
//02/19/24 
 




#include <iostream>
#include <string> 
using namespace std;

int main() {
  
  string choice, africanAmericanChoice; 

  
  cout << "You are taking part in a demographic survey" << endl;
  cout << "Please state if you are American orMexican " << endl;
  cout << "Type 'American' or 'Mexican' : " << endl;
  cin >> ws; 
  getline(cin, choice); 

  if (choice == "American" || choice == "american") {
    
    cout << "Do you identify as African American? (Yes/No): ";
    getline(cin, africanAmericanChoice); 

    if (africanAmericanChoice == "Yes" || africanAmericanChoice == "yes") {
      cout << "You are African American" << endl;
    } else {
      cout << "You are American" << endl;
    }
  }
  else if (choice == "Mexican" || choice == "mexican") {
    cout << "You are Mexican" << endl;
  }
  else if (choice == "African American" || choice == "african american") {
    cout << "You are African American" << endl;
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  
  cout << "Thanks for your service!" << endl; 
  return 0; 

} 
