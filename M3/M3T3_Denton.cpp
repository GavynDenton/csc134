// CSC 134
// M3T2 - Gambling??
// Gavyn Denton
// 2/21/24

#include <iostream>
#include <cstdlib>  //for rand()
#include <ctime>    // for time()
using namespace std;

int main() {
    cout << "Welcome to the craps table" << endl;
    // define variables
    int roll;
    int die1, die2;
    int seed;

    // set random seed
    //cout << "Enter lucky number: ";
    //cin >> seed;
    srand(time(0)); // our lucky # is the time in sec

    // roll dice
    //cout << "What did you roll? ";
    //cin >> roll;
    die1 = (rand() % 6) + 1;
    die2 = (rand() % 6) + 1;
    roll = die1+die2;

    //get results
    cout << "You'r roll was: (" << die1 << "+" << die2 << ") -> " << roll << endl;
    cout << "You'r point is: " << roll << endl;
    if (roll == 7 || roll == 11) {
        cout << "Your Win!" << endl;
            /* cout << "Roll again!" << endl;
            cout << "What did you roll? ";
            cin >> roll; */
    }
    else if (roll == 2 || roll == 3 || roll == 12){
        cout << "Your lose..." << endl;
        cout << "TODO: roll the point" << endl;
    }

    // If statements
    //if () {}

    return 0;
}