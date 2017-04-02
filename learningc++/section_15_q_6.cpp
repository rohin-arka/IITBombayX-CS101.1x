#include <iostream>
using namespace std;
int main(){
  int number1 = 1, number2;
  cout << "Enter number of your choice" << endl;

  cin >> number2;

  switch(number1){
    case 1:
      cout << "Happy";
    case 2:
      if (number2 < 0)
        cout << "Holidays";
      if (number2 > 10)
        cout << "Weekend";

    default:
      cout << "Day";
  }
  return 0;
}
