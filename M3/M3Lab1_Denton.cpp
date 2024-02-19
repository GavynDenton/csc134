// CSC 134
// M3Lab1 - Choices
// Gavyn Denton
// 2/19/24

#include <iostream>
using namespace std;

int main() {
    // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
    int choice; 

  // ask the question
  cout << "What kind of pizza do you want?" << endl;
  cout << "Type 1 for cheese and 2 for custom: "; 
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
    cout << "Ok, your cheese pizza will be ready in just a few minutes" << endl;
  }
  else if (2 == choice) {
  	cout << "Ok, What toppings do you want?" << endl;
    cout << "Type 1 for pepperoni, 2 for ham, 3 for sausage, and 4 for meatlovers(pepperoni, ham, and sausage): ";
    cin >> choice;
        if (1 == choice) {
            cout << "Ok, your pepperoni pizza will be done in just a few minutes." << endl;
        }
        else if (2 == choice) {
            cout << "Ok, your ham pizza will be done in just a few minutes." << endl;
        }
        else if (3 == choice) {
            cout << "Ok, your sausage pizza will be done in just a few minutes." << endl;
        }
        else if (4 == choice) {
            cout << "Ok, your meatlovers pizza will be done in just a few minutes." << endl;
        }
        else {
            cout << "I'm sorry, that is not a valid choice." << endl;
        }
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for choosing Dough Delight Pizzeria!" << endl; // this runs no matter what they choose
    return 0;
}