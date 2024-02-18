
// CSC 134
// M2HW - Question 3
// Denton
// 2/14/24

#include <iostream>
using namespace std;

int main() {
    // Variables
    double guest;
    double pizzas;
    double slicespp;
    double slicespg = 3;
    double slices_left;
    double Tslices;
    double slices_ate;

    // User imput
    cout << "How many pizzas did you order? ";
    cin >> pizzas;
    cout << "How many slices does each pizza have? ";
    cin >> slicespp;
    cout << "How many guests do you have? ";
    cin >> guest;

    // Calculate
    Tslices = slicespp * pizzas;
    slices_ate = guest * slicespg;
    slices_left = Tslices - slices_ate;
    //Print answers
    cout << "You will have ";
    cout << slices_left;
    cout << " slices left over." << endl;

    /*Suggested improvments(add an if statement so that if the value of slices left
    is zero the program prints a message saying "You wont have any remaining slices"
    and if the remaining number of slices is negative the program will tell you how
    many pizzas you need*/ 
    

    return 0;
}