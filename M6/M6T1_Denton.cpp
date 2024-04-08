// CSC 134
// M6T1 - 
// Denton
// 4/8/24

#include <iostream>
using namespace std;

// function prototypes
void part1();
void part2();

int main() {
    cout << "M6T1" << endl;
    part1();
    part2();
    return 0;
}


//Function Definitions
void part1() {
    // Part 1 -- just do the count
    cout << "part 1" << endl;
    int cars;
    int total = 0;
    double average = 0;
    const int SIZE =5; // five days
    // For each day monday through friday
    // count cars going by
    // add them to the total
    for (int i=0; i < SIZE; i++) {
        cout << "Day " << i+1 << " Cars counted? ";
        cin >> cars;
        total= total + cars;
    }
    // find the total
    cout << "Total cars: " << total << endl;
    // find the average per day
    average = (double) total / SIZE; // Keep decimal on avg
    cout << "Per day avg: " << average << endl;
}

void part2() {
    cout << "Part 2" << endl;
    cout << "Please enter the # of cars spotted for each day" << endl;
    int total = 0;
    double average;
    const int SIZE = 5; // number of days
    // we can declarre an array both ways as seen below
    int cars[SIZE] = {0}; // size explicit, each value is zero
    string days[] = {"Mon","Tue","Wed","Thu","Fri"}; // size is implied

    // ask user for data fro each day
    for (int count=0; count < SIZE; count++) {
        cout << days[count] << ": ";
        cin >> cars[count];
    }
    // now find the total
    for (int count=0; count < SIZE; count++) {
        total += cars[count]; // add in each days woth of cars
}
average = (double) total / SIZE;
cout << "Total = " << total << " and average = " << average << endl;

// Finally, Graph the data
// Format:
// Mon  5   |||||
for (int i=0; i < SIZE; i++){
    cout << days[i] << "\t";
    cout << cars[i] << "\t";
    // print the bar graph, one "|" per car
    for (int j=0; j < cars[i]; j++) {
        cout << "|";
    }
    cout << endl; // finish the line
}

}