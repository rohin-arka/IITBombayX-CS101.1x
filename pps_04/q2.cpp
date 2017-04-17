#include <iostream>
using namespace std;
void myFunc1() {
  char c;
  cin >> c;
  if (c != 'X') { myFunc1();}
  cout << c;
  return;
}

int main() {
    cout << "Give a sequence of characters: ";
    myFunc1();
    myFunc1();
    return 0;
}
// Answer :n > 35
// Explanation
// The function 'myFunc2' has a integer parameter 'n'. In this function, the statement 'n /= 2;' is written twice. This means that the number 'n' is dvided by 4, and the quotient, i.e. the result is stored in 'n'.
// Case 1:
// If the quotient, is less than or equal to 8, 'myFunc2' will be executed again, with the updated value of 'n'. In such a case, 'myFunc2' will again divide the value 'n' by 4. Hence, the value of 'n' always decreases on every execution of 'myFunc2', the function will execute infinitely.
// Case 2:
// If the quotient obtained is greater than 8, then the statement 'return n%2' is executed, which returns the value '0' or '1'.
// So, the very first time, when the function 'myFunc2' is called, we need to obtain a quotient (Q), which is greater than 8 i.e. 9, 10, 11 .... Let us assume that we need to obtain 9 as the quotient.
// Q = n / 4
// 9 = ? / 4
// n = 9 * 4
// n =  36
// Hence, if the number is greater than or equal to 36, the condition 'if (n <= 8)' will not get satisfied, and the statement 'return n%2' will be executed. Thus, the correct option is 'n > 35'
// Some sample cases of 'n' are given below
//
// -----------------------------------------------------------------------------------
//  n      n/4        n<=8              Value of 'n' after 'n/4' in the next call
// -----------------------------------------------------------------------------------
//  8       2      myFunc2(1)                  0
// 16       4      myFunc2(2)                  0
// 28       7      myFunc2(3)                  0
// 32       8      myFunc2(4)                  1
// 35       8      myFunc2(4)                  1
// 36       9      return 9 % 2 = 1           N/A
// 40      10      return 10 % 2 = 0          N/A
// -----------------------------------------------------------------------------------
