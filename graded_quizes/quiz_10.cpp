#include <iostream>
using namespace std;
int main(void){
  int inputNumber = 5524, number, ssd, inputNumber2, inputNumber3;
  inputNumber2 = inputNumber;
  inputNumber3 = inputNumber;
  int counter2 = 0, counter = 1, squareSum = 0, lastTwo = 0, counter2copy = counter2, additionLastTwo;
  for(int i = 0; i < 11; i++){
    while(inputNumber > 0){
      number = inputNumber % 10;
      squareSum += (number * number);
      inputNumber = inputNumber /10;
    }
    ssd = squareSum * 323;
    while(inputNumber1 > 0){
      counter2 = counter2 * 10 + inputNumber1 % 10;
      inputNumber1 = inputNumber1/10;
     }

     for(int i = 1; i < 3; i++){
       if(i == 2){
         lastTwo += (inputNumber3 % 10)* 10;
       }
       else{
         lastTwo = inputNumber3 % 10;
       }
       cout << inputNumber3 << endl;
       inputNumber3 = inputNumber3 /10;
     }
     additionLastTwo = ssd + lastTwo;
    //  if(ssd < additionLastTwo){
    //    break;
    //  }

    counter++;
  }
  cout << additionLastTwo << endl;
  cout << squareSum << endl;
  return 0;
}
