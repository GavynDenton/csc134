// CSC 134
// M3Lab2 - 
// Gavyn Denton
// 2/26/24

#include <iostream>
using namespace std;

int main() {
    // Variables
    int grade;

    cout << "What is your numerical grade: ";
    cin >> grade;
    
    if(grade >=101){
            cout << "That is an invalid grade.";
        }
        else if (grade >=90 ) {
        cout << "Your letter grade is an A.";
        }
        else if(grade >=80) {
            cout << "Your letter grade is a B.";
        }
        else if (grade >=70){
            cout << "Your letter grade is a C.";
        }
        else if (grade >=60){
            cout << "Your letter grade is a D.";
        }
        else if (grade >=00){
            cout << "Your letter grade is a F.";
        }
        
        else if(grade <0){
            cout << "That is an invalid grade.";
        }
    cout << endl;
    return 0;
}