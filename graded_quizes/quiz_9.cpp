#include<iostream>
using namespace std;
int main() {
  int c, a, k, h, g;
  cout << "Enter two numbers:";
  cin >> c >> a;
  k = c;
  h = a;
  while(c != a){
    if(c > a)
      c = c - a;
    else
      a = a - c;
  }
  g = k * h / c;
  cout << g << endl;
  return 0;
}
// ANSWER
// If we replace STATEMENT 1 with c != a and
// STATEMENT 2 with c = c - a; and
// STATEMENT 3 with g = k * h / c; ,
// then the program computes LCM of the two numbers (c and a) and stores the result in g
