// CSC 134
// Rectangle
// Denton
// 5/1/24

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    cout << "M7T2 - Rectangles" << endl;

    //Rectangle r1;
    //r1.setWidth(4);
    //r1.setLength(3);
    double len, wid, area;
    cout << "How wide is the rectangle? ";
    cin >> wid;
    cout << "How long is the rectangle? ";
    cin >> len;
    // set up object
    //r1.setWidth(wid);
    //r1.setLength(len);
    Rectangle r1(len, wid);
    // get answer
    cout << "The rectangle is ";
    cout << r1.getWidth() << " by " << r1.getLength() << ":" << endl;
    cout << "The Area is: "<< r1.getArea() << endl;


    return 0;
}
