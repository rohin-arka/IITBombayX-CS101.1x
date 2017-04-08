// Happy Numbers: A number is called a happy number, if you repeat the process,
// of squaring the sum of the digits, till the value 1 is obtained. E.g. You need to do
// the following to perform this check: (a) compute the sum of the squares of its digits (b)
// if the resultant value is 1, then the number is a happy number, else execute point (a).
// If a number is not a happy number, there will be an endless loop/cycle to this execution.
//
// Task: In this programming assignment, you are required to write code that checks whether
// the number is a happy number or not, for 10 cycles (iterations) only. 2 examples of happy
// numbers (limited to 10 cycles ) are given below:

#include <iostream>
using namespace std;
int main(void){
  int number, finalNumber, cycle_no, squareSum;
   cin >> number;
  for(int i = 1; i < 11; i++){
    squareSum = 0;
    while(number != 0){
      squareSum += (number % 10) * (number % 10);
      number = number / 10;
    }
    number = squareSum;
    cycle_no = i;
    finalNumber = number;
    if(number == 1){
      break;
    }
  }
  cout << finalNumber << endl;
  cout << cycle_no << endl;
  return 0;
}
