// CSC 134
// M5T1
// Denton
// 3/18/24

#include <iostream>
using namespace std;

// Goal -
// Create one void function,
// and one value returning function

// Function Prototypes
void say_hello ();
int give_the_answer();
int double_a_number(int num);

// Function definitions
int main() 
{
    cout << "Hello from main()" << endl;
    say_hello();
    int my_answer = give_the_answer();
    cout << "The answer is: " << my_answer << endl;
    // now double the answer
    int twotimes = double_a_number(7);
    cout << "Here's another number: " << twotimes << endl; 
    return 0;
}

void say_hello () {
    cout << "Hi from say_hello()" << endl;
    return;
}

int give_the_answer(){
    return 42;
}

int double_a_number(int num) {
    int new_num = num * 2;
    return new_num;
}