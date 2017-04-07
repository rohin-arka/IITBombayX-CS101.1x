#include<iostream>
using namespace std;
int main () {
   int a, b;
   do {
      cout << " Enter a : " ;
      cin >> a ;
      cout << " Enter b : " ;
      cin >> b ;
   } while ( a < 10 || b > 10) ;
   return 0;
}
// answer:
// For all values of input 'a' greater than 9 and input 'b' lesser than 11,
// the program is guaranteed to terminate correct
