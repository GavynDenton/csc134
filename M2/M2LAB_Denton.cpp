/*
M2LAB1
Crate Sales
Denton
2/5/24
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Take 1 - just a rectangle
    // declare variebles
    double length, width, hight;
    double vol;
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    double cost;
    double charge;
    cout << fixed << setprecision(2);
    // get input from user
    cout << "What's the length? ";
    cin >> length;
    cout << "What's the width? ";
    cin >> width;
    cout << "What's the hight? ";
    cin >> hight;
    // do calculations
    vol = length * width * hight;
    cost = vol * COST_PER_CUBIC_FOOT;
    charge = vol * CHARGE_PER_CUBIC_FOOT;
    // print the answer
    cout << "The volume is: " << vol << endl;
    
    
    cout << "The cost is: $" << cost << endl;
    cout << "The charge is: $" << charge << endl;

    return 0;
}