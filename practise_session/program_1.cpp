// Program 1:
// Write a C++ program to find the area and perimeter of a rectangle.
// Accept the length and width of the rectangle as input from the user.
// Sample input/output statements are given below:
//    Enter the length of the rectangle:  20
//    Enter the width of the rectangle: 10
//    The area of rectangle is (l x w) = 200
//    The perimeter of rectangle is 2(l + w) = 60
#include <iostream>
using namespace std;

int rectangleArea(int length, int width){
  return (length * width);
}
int rectanglePerimeter(int length, int width){
  return (2 * (length + width));
}
int main(){
  int rectangleLength, rectangleWidth;

  cout << "Enter the length of a rectangle" << endl;
  cin >> rectangleLength;

  cout << "Enter the width of a rectangle" << endl;
  cin >> rectangleWidth;

  cout << "The area of rectange is" << endl;
  cout << rectangleArea(rectangleLength, rectangleWidth) << endl;

  cout << "The perimter of a  rectangle is" << endl;
  cout << rectanglePerimeter(rectangleLength, rectangleWidth) << endl;

  return 0;
}
