//#include<iostream>
//using namespace std;

// class declaration
class Rectangle{
private:
    double width;
    double length;
public:
    Rectangle();                // default contructor
    Rectangle(double, double);  // more useful constructor
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;

};

// function definition
Rectangle::Rectangle(){
    //default constructor
    width = 0;
    length = 0;
}
// length then width
Rectangle::Rectangle(double len, double wid){
    width = wid;
    length = len;
    // fix negative values
    if (width < 0) {
        width = -width;
    }
    if (length < 0){
        length = -length;
    }
}

void Rectangle::setWidth(double w){
    width = w;
    if (width < 0) {
        width = -width;
    }
}

void Rectangle::setLength(double l){
    length = l;
    if (length < 0){
        length = -length;
    }
}

double Rectangle::getWidth() const{
    return width;
}
double Rectangle::getLength() const{
    return length;
}

double Rectangle::getArea() const{
    double area = length * width;
    return area;
}