/*
CSC 134
M1T2 - Apple Sales Pt. 2
Gavyn Denton
1/31/24
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    cout << "M1LAB - Apple Sales" << endl;
    // Simulate selling apples
    // Set up variable (nouns)
    string name = "Gavyn";
    int num_apples;
    double price_each;
    double total;

    //Print the output
    cout << "Hi, whats your name? ";
    cin >> name;
    cout << "Welcome to the our Orchard " << name << endl;
    cout << "How many apples do you have? ";
    cin >> num_apples;
    cout << "What is the price per apple? ";
    cin >> price_each;
    cout << "at a cost of $" << price_each << " each." << endl;
    

    // Do the calculations
    cout << fixed << setprecision(2);
    total = num_apples * price_each;
    // Note: math operations are + - * /

cout << "your total cost is $" << total << endl;

    return 0;
}
