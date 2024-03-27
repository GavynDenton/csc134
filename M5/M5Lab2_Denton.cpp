// M5LAB2
// CSC 134
// Denton
// 3/27/24

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

double getLength ();
double getWidth ();
double getArea(double length, double width);
double displayData(double length, double width, double area);
int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors

   double length, width, area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength() {
   int length;
// ask for rectangles length
cout << "What is the length of the rectangle? ";
cin >> length;
return length;
}

double getWidth() {
   int width;
// ask for width of rectangle
cout << "What is the width of the rectangle? ";
cin >> width;
return width;
}

double getArea(double length, double width) {
   int area;
// do math to find area of rectangle
area = length * width;
cout << "The area of your rectangle is: " << area << endl;
return area;
}

double displayData(double length, double width, double area) {
int displayData;
// print answer
cout << "Rectangle: (" << length << "," << width << "," << area << ")" << endl;
return displayData;
}