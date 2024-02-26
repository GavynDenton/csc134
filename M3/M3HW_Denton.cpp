// CSC 134
// M3HW - Question 
// Gavyn Denton
// 2/26/24

#include <iostream>
using namespace std;

int main() {
    // variables
    int ans;
    int ans2;
    int ans3;

    cout << "Hello!! I'm a chat bot. Do you want to talk?" << endl;
    cout << "Type 1 for yes and 2 for no: ";
    cin >> ans;
    if (ans == 1){
        cout << "Awesome, How was your day?" << endl;
        cout << "Type 1 for good, 2 for alright, and 3 for bad: ";
        cin >> ans2;
        if (ans2 == 1){
            cout << "That's good to hear! What made you have a good day?" << endl;
            cin >> ans3;
            cout << "I can see why that made your day good." << endl;
        }
        else if (ans2 == 2){
            cout << "I'm sorry to hear that. What made your day alright?" << endl;
           cin >> ans3;
           cout <<  "I can see why that made your day alright." << endl;
        }
        else if (ans2 == 3){
            cout << "I'm sorry to hear that. What made you have a bad day?" << endl;
            cin >> ans3;
            cout <<  "I can see why that made your day bad." << endl;
        }
    }
    else if (ans == 2) {
        cout << "Ok, maybe next time, goodbye." << endl;
    }






    return 0;
}