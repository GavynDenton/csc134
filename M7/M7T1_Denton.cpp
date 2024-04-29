// CSC 134
// M7T1 - Restaurant Rating
// Denton
// 4/29/25

#include <iostream>
using namespace std;

class Restaurant{
 private:
    string name;    // the name
    double rating;  // 0 to 5 stars

 public:
 // constructor
 Restaurant(string n, double r) {
        name = n;
        rating = r;
 }
    void setName(string n){
        name = n;
    }
    void setRating(double r){
        rating = r;
    }
    string getName() const {
        return name;
    }
    double getRating() const {
        return rating;
    }
    // print a formatted entry
    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Rating: " << rating << "/5 stars" << endl;
    }

};
int main() {
    cout << "M7T1 - Restaurant Reviews" << endl;
    // create restaurant
    Restaurant lunch_place = Restaurant("Chipotle", 4.0);
    cout << "Review info" << endl;
    Restaurant breakfast_place = Restaurant("Waffle House", 4.5);
    cout << "Breakfast:" << endl;
    breakfast_place.printInfo();
    //cout << breakfast_place.getName() << endl;
    //cout << breakfast_place.getRating() << endl;
    cout << "Lunch:" << endl;
    lunch_place.printInfo();
    //cout << lunch_place.getName() << endl;
    //cout << lunch_place.getRating() << endl;
    return 0;
}