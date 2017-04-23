// Write a C++ program to accept the length of all 3 sides of the triangle and
// then display whether a triangle is a right angled triangle or not.
// Sample input/output statements are given below:
//    Sample 1:
//       Enter Length for Side 1: 10
//       Enter Length for Side 2: 10
//       Enter Length for Side 3: 20
//       The given triangle is not right angled triangle.
//    Sample 2:
//       Enter Length for Side 1: 10
//       Enter Length for Side 2: 24
//       Enter Length for Side 3: 26
//       The given triangle is a right angled triangle.
#include <iostream>
using namespace std;
int main(){
  int a, b, c, d;

  cout << "Enter side 1" << endl;
  cin >> a;

  cout << "Enter side b" << endl;
  cin >> b;

  cout << "Enter side c" << endl;
  cin >> c;

  d = b * b + c * c;

  if ((a*a) == d)
    cout << "The given triangle is a right angled triangle.";
  else
    cout << "The given triangle is not right angled triangle.";

  cout << endl;  
  return 0;
}
