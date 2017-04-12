#include <iostream>
using namespace std;
int main(void){
  int inputNumber = 7024, number, ssd, inputNumber2, inputNumber3;

  int counter2, counter, squareSum, lastTwo, additionLastTwo;
  inputNumber3 = inputNumber;

  for(int i = 0; i < 11; i++){
    inputNumber2 = inputNumber;
    int reverseNumber;
    int newNumber1 = inputNumber2 / 10;
    counter2 = 0;
    counter = 1;
    squareSum = 0;
    lastTwo = 0;
    while(inputNumber > 0){
      number = inputNumber % 10;
      squareSum += (number * number);
      inputNumber = inputNumber /10;
    }
    ssd = squareSum * 323;
    int newNumber = inputNumber2 % 10;
    while(inputNumber2 != 0){
      newNumber = newNumber * 10;
      counter2 = newNumber;
      inputNumber2 = inputNumber2 / 10;
     }
     cout << newNumber1 << endl;
     reverseNumber = newNumber1 + counter2/10;
     for(int i = 1; i < 3; i++){
       if(i == 2){
         lastTwo += (reverseNumber % 10)* 10;
       }
       else{
         lastTwo = reverseNumber % 10;
       }
       reverseNumber = reverseNumber / 10;
     }
     additionLastTwo = ssd + lastTwo;
     if((inputNumber3 * 8) < additionLastTwo){
       break;
     }
     else{
       inputNumber = additionLastTwo;
     }

    counter++;
  }
  cout << lastTwo << endl;
  cout << squareSum << endl;
  return 0;
}
