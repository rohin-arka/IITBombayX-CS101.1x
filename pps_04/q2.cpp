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
