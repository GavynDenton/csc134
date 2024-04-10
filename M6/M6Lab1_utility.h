#ifndef M6LAB1_UTILITY_H
#define M6LAB1_UTILITY_H
// header files let you add more funtions to your program
#include <iostream>
using namespace std;
// Prototypes
string shell_name(int shell);

// definitions
string shell_name(int shell) {
    // imput: shell number (0, 1, 2)
    // output: the name ("EMPTY", "BLANK", "LIVE")
    string name;
    const int MAX_SIZE = 6; // no more then 6 shells, size of array
    const int EMPTY = 0;
    const int BLANK = 1;
    const int LIVE = 2;
    if (shell == EMPTY) {
        name = "Empty";
    }
    if (shell == BLANK) {
        name = "Blank";
    }
    if (shell == LIVE) {
        name = "Live";
    }
    return name;
}

#endif // M6LAB1_UTILITY_H