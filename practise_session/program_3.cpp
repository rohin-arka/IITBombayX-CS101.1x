#include <iostream>
using namespace std;

int main(){
  double inputNumber, precison;
  int number;
  cout << "Enter the floating point number" << endl;
  cin >> inputNumber;

  number = int(inputNumber);
  precison = inputNumber - number;

  cout << "Fractional part of the number " << inputNumber << " is " << precison << endl;

}
