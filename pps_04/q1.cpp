// Consider the following recursive function that has a positive integer number 'n'
// as a parameter. Assume that the parameter 'n' is a valid integer number.
// The function, 'myFunc2' will terminate i.e. the control exits the function and
// returns to the place from where it was called, when:
#include <stdio.h>
int myFunc2(int n) {
   n /= 2;
   n /= 2;

   if (n <= 8) {
      myFunc2(n/2);
   }
   return n%2;
}
