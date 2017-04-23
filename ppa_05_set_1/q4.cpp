// Write a C++ program that accepts a number as input from the user, denoting the year,
// and prints whether the year is a leap year or not.
//    Sample 1:
//       Enter year: 2008
//       The year entered is a leap year
//    Sample 2:
//       Enter year: 2015
//       The year entered is not a leap year
//    Sample 3:
//       Enter year: 12
//       The year entered is not valid
#include <iostream>
using namespace std;
int main(){
  int year;
  cout << "Enter year:" << endl;
  cin >> year;
  if ((year/1000) == 0)
    cout << "The year entered is not valid";
  else if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    cout << "The year entered is a leap year";
  else
    cout << "The year entered is not a leap year";

  cout << endl;
  return 0;
}
