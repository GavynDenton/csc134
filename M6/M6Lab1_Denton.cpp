// CSC 134
// M6Lab1 - Buckshot Roulette
// Denton
// 4/10/24

#include <iostream>
#include "M6Lab1_utility.h"
using namespace std;
// constant variables
const int MAX_SIZE = 6; // no more then 6 shells, size of array
const int EMPTY = 0;
const int BLANK = 1;
const int LIVE = 2;

// global array for the magazine
int magazine[MAX_SIZE] = {LIVE, BLANK, LIVE, BLANK, EMPTY, EMPTY};

int main() {
    cout << "M6Lab1" <<  endl;
    // range based for loop
    for (int shell : magazine) {
        cout << shell << ", ";
        cout << shell_name(shell) << endl;
    }
    
    cout << endl;
    return 0;
}