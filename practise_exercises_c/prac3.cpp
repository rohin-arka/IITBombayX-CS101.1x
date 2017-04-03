#include <iostream>
using namespace std;
int main(void){
  int number, counter, binaryNumber[5];
  cout << "Enter the number" << endl;
  cin >> number;
  counter = 0;
  cout << "The binary number of " << number << " is" << endl;
  while(number != 0){
    number = number / 2;
    binaryNumber[counter] = number % 2;
    counter++;
  }
  for(int i = 0; i < counter; i++){
    cout << binaryNumber[i] << endl;
  }
  return 0;
}
