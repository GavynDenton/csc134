// Use as starter for any program
// CSC 134
// M3T1 - 
// NAME
// DATE

#include <iostream>
using namespace std;

int main() {
    
    // declare variebles
    // Rectangle A
    double lengthA, widthA;
    double areaA;
    // Rectangle B
    double lengthB, widthB;
    double areaB;

    // get input from user RA
    cout << "What's the length of rectangle A? ";
    cin >> lengthA;
    cout << "What's the width of rectangle A? ";
    cin >> widthA;
    // do calculations
    areaA = lengthA * widthA;
    // print the answer
    cout << "The area of rectangle A is: " << areaA << endl;
    

    // Rectangle B
    // get input from user RB
    cout << "What's the length of rectangle B? ";
    cin >> lengthB;
    cout << "What's the width of reactangle B? ";
    cin >> widthB;
    // do calculations
    areaB = lengthB * widthB;
    // print the answer
    cout << "The area of rectangle B is: " << areaB << endl;

    // Equal or Not Equal
    if (areaA > areaB) {
        cout << "Rectangle A is larger." << endl;
    }
    else if (areaB > areaA) { cout << "Rectangle B is larger." << endl;
    }
    else {
        cout<< "Rectangle A and Rectangle B are equal." << endl;
    }

    return 0;
}