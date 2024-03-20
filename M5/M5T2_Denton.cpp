// CSC 134
// M5T2 - Imput and Output for functions
// Denton
// 3/20/24



#include <iostream>
using namespace std;


// function prototypes here
// main();
// square()
// printAnswer()
int square(int);
void printAnswerLine(int, int);

//function definitions here
int main() {
    cout << "M5T2" << endl;
    cout << "Pringting a table of squares" << endl;
    cout << "Num\tNum Squared" << endl;
    cout << "______________________________" << endl;
    // In a loop,
    // find the square of the number
    // then call printAnswerLine with number and square
    // TODO 
    int num, num_squared;
    //num = 1;
    for (int num=1; num <= 10; num++) {
    num_squared = square(num);
    printAnswerLine(num, num_squared);
    }
    //cout << num << "\t" << num_square << endl;
    return 0;
}

int square(int number){
// imput: a number
// output: number squared
int answer = number * number;
return answer;
}
void printAnswerLine(int first, int second){
// print two numbers with tab separation
cout << first << "\t" << second << endl;
}