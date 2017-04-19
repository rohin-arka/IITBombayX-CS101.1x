#include <iostream>
using namespace std;

int main(){
  int a, b, c;

  cout << "Enter a :" << endl;
  cin >> a;

  cout << "Enter b :" << endl;
  cin >> b;

  c = (a * a + (2 * a * b) + b * b);

  cout << "(a + b)^2 = " << c << endl;
}
