// Find the sum of squares of individual digits of a number 'sqdnumber'
//  and store the sum in variable 'sqdNumber_result'. E.g. if the number is 234,
//  the sum is computed as (22 + 32 + 42 = 4 + 9 + 16 = 29)
//
// Click on the next unit (visible at the top of your screen), to follow
// the instructions and write your code in the space provided.
#include <iostream>
using namespace std;
int main(void){
  int sqdNumber, sqdNumber_result, singleDigitSquare;
  cin >> sqdNumber;

  while(sqdNumber != 0){
    singleDigitSquare = sqdNumber % 10;
    singleDigitSquare *= singleDigitSquare;
    sqdNumber_result += singleDigitSquare;
    sqdNumber = sqdNumber / 10;
  }
  cout << sqdNumber_result << endl;
  return 0;
}
