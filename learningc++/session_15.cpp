#include <iostream>
using namespace std;
int main(){
  int a, b, flag;
  cout << "Provide a and b value" << endl;

  cin >> a >> b;

  cout << "can b divides a " << endl;
  flag = ((a % b) == 0);
  cout << flag << endl;


}
