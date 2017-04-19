#include <iostream>
using namespace std;

void swap(int &a, int &b){
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main(){
  int a, b;

  cout << "Enter value for a :" << endl;
  cin >> a;

  cout << "Enter value for b :" << endl;
  cin >> b;

  swap(a, b);

  cout << "a = " << a << endl << "b = " << b << endl;

  return 0;
}
