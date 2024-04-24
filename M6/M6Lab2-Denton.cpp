// CSC 134
// M6Lab2 - Arrays, Vectors, and Linked Lists
// Denton
// 4/24/24

#include <iostream>
#include <vector>

using namespace std;

// 3 examples
void array_example();
void vector_example();
void linked_list();

int main() {
    cout << "M6Lab2" << endl;
    array_example();
    vector_example();
    linked_list();
    return 0;
}

void array_example() {
    cout << "Example 1: Array" << endl;
    const int SIZE = 5;  // abs max
    int max = 3;        // abs min
    int nums[SIZE] = {1, 2, 2, 0, 0};
    // add a fourth item
    nums[max] = 3;
    max = max+1;
    // print each item
    for (int i=0; i<max; i++) {
    cout << nums[i] << ",";
    }
cout << endl;
}
void vector_example(){
    // recuired include vector
    vector<int> nums; // an empty vector of integers
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    cout << "Vector contains " << nums.size() << " numbers" << endl;
    // index access works like arrays
    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << ",";
    }
    cout << endl;
    // or use member access
    for (int num: nums) {
        cout << num << ",";
    }
cout << endl;
cout << "It can hold " << nums.capacity() << " before resizing" << endl;
}

// this should be up top
struct Node {
    int num;    // the data
    Node* next;  // pointer to next node
};

void linked_list(){
    cout << "Example 3: Linked List" << endl;
    Node* head = nullptr;   // empty list
    // now make some nodes
    Node first;
    first.num = 1;
    first.next = nullptr; //null pointer -- "nowhere"
    Node second;
    second.num = 2;
    second.next = nullptr;
    Node third;
    third.num = 3;
    third.next = nullptr;

    // print out first node
    cout << "first.num = " << first.num << endl;
    // connect nodes 1 and 2
    head = &first; // head points to address of first
    first.next = &second;   // first points to second
    second.next = &third;   // second points to third

    // Finally, walk the list and print each item
    Node* probe = head; // probe is our temporary pointer
    while (probe != nullptr) {
        cout << "Next node: " << probe->num << endl;
        probe = probe->next;
    }
    cout << "Reached end of list." << endl;;
}