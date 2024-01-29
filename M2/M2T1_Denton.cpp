/*
CSC 134
M2T1 - Receipt
Gavyn Denton
1/29/24
*/

#include <iostream>
#include <string>
using namespace std;


int main()
{
    cout << "M2T1" << endl;
    // set up variables
    string meal = "Value Meal";
    double meal_price = 5.99;
    double tax_percent = 0.08;
    double tax_amount = 0;
    double total = 0;

    // do calcuations

    // pring the reciept
    // TODO: fix decimals
    cout << meal << "\t$" << meal_price << endl;
    cout << "Tax:" << "\t\t$" << tax_amount << endl;
    cout << "Total:" << "\t\t$" << total << endl;

    return 0;
}