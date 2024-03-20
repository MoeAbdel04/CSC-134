/*
CSC 134
M5T2 - 1-10 squares
Mahamed Abdel
3/20/24

*/






#include <iostream>
#include <iomanip> 

using namespace std;

int square(int num) {
    return num * num;
}

void printAnswer(int num, int sq) {
    cout << setfill(' ') << setw(2) << num << " squared is " 
         << setfill('.') << setw(5) << sq << endl;
}

int main() {
    cout << "----M5T2----" << endl;
    cout << "-----------------------------------------------" << endl;
    
    for (int i = 1; i <= 10; ++i) {
        int sq = square(i);
        printAnswer(i, sq);
    }

    cout << "-----------------------------------------------" << endl;
    
    return 0;
}
