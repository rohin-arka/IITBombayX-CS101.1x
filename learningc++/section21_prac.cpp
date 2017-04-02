#include <iostream>
using namespace std;
int main(void){
  int max, min, numberOfStudents, marks, count = 1, flag = 1, sum = 0;
  float avg;
  cout << "Enter the number of marks" << endl;
  cin >> numberOfStudents;
  while(count <= numberOfStudents){
    cout << "Enter the marks of student" << endl;
    cin >> marks;
    sum += marks;
    if (flag){
      min = marks;
      max = marks;
      flag = 0;
    }else{
      min = marks < min ? marks : min;
      max = marks > max ? marks : min;
    }
    count++;
  }
  cout << "The sum of total student marks is ";
  cout << sum << endl;
  cout << "The average marks is ";
  avg = sum / numberOfStudents;
  cout << avg << endl;
  cout << "The minimum marks is ";
  cout << min << endl;
  cout << "The max marks is ";
  cout << max << endl;
  return 0;
}
