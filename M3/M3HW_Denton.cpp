// CSC 134
// M3HW - Question 
// Gavyn Denton
// 2/26/24

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
 // Question 1 Chat Bot 
  cout << "Question 1 - ChatBot" << endl;
  cout << endl;
    // variables
    int ans1;
    int ans2;
    string text;


    cout << "Hello!! I'm a chat bot. Do you want to talk?" << endl;
    cout << "Type 1 for yes and 2 for no: ";
    cin >> ans1;
    if (ans1 == 2) {
        cout << "Ok, maybe next time, goodbye." << endl;
    }
    else if (ans1 == 1){
        cout << "Awesome, How was your day?" << endl;
        cout << "Type 1 for good, 2 for alright, and 3 for bad: ";
        cin >> ans2;
        if (ans2 == 1){
            cout << "That's good to hear! What made you have a good day?" << endl;
            cin >> text;
            cout << "I can see why that made your day good." << endl;
        }
        else if (ans2 == 2){
            cout << "I'm sorry to hear that. What made your day alright?" << endl;
           cin >> text;
           cout <<  "I can see why that made your day alright." << endl;
        }
        else if (ans2 == 3){
            cout << "I'm sorry to hear that. What made you have a bad day?" << endl;
            cin >> text;
            cout <<  "I can see why that made your day bad." << endl;
        }
        else {
            cout << "Thats an invalid answer, please restart." << endl;
        }
    }
    // test -- clear any extra input before part 2
    cin.clear();
    cin.ignore(10000, '\n');
    
    cout << endl;
    cout << endl;

 // Question 2
    cout << "Question 2 - Reciept" << endl;
    cout << endl;

    // set up variables
    int meal;
    int dine;
    double tax_percent = 0.08;
    int total;
    int tax_amount;
    double tip_percent = 0.15;
    int tip_amount;

    cout << "How much is your meal?\t$";
    cin >> meal;
    cout << "Are you dining in or taking out?" << endl;
    cout << "Type 1 for dine in, and 2 for take out. ";
    cin >> dine;
    if (dine == 1) {
    // do calcuations
    tax_amount = meal * tax_percent;
    tip_amount = meal * tip_percent;
    total = meal + tax_amount + tip_amount;

    // pring the reciept
    // print this once to set the decimals to exactly 2
    cout << endl;
    cout << "Hi, i'm your reciept!!!" << endl;
    cout << "--------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Meal:" << "\t\t$" << meal << endl;
    cout << "Tax:" << "\t\t$" << tax_amount << endl;
    cout << "Tip:" << "\t\t$" << tip_amount << endl;
    cout << "--------------------" << endl;
    cout << "Total:" << "\t\t$" << total << endl;
    }
    else if (dine == 2){
// do calcuations
    tax_amount = meal * tax_percent;
    total = meal + tax_amount;

    // pring the reciept
    // print this once to set the decimals to exactly 2
    cout << endl;
    cout << "Hi, i'm your reciept!!!" << endl;
    cout << "--------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Meal:" << "\t\t$" << meal << endl;
    cout << "Tax:" << "\t\t$" << tax_amount << endl;
    cout << "--------------------" << endl;
    cout << "Total:" << "\t\t$" << total << endl;
    }
    

    



    return 0;
}