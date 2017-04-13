#include <iostream>
using namespace std;
int main(void){
  int inputNumber = 7345, ssd, inputLastNumber, rpm, rightShiftNumber, lastTwo, nextRpm, firstRpm;
  firstRpm = inputNumber;
  int year;
  for(int i = 1; i < 11; i++){
    ssd = 0, inputLastNumber = 0, rightShiftNumber = 0, nextRpm = 0;
    rpm = inputNumber;
    while(inputNumber !=0 ){
      inputLastNumber = inputNumber % 10;
      ssd += (inputLastNumber * inputLastNumber);
      inputNumber = inputNumber /10;
    }
    ssd = ssd * 323;
    inputLastNumber = rpm % 10;
    rightShiftNumber = rpm/10;
    while(rpm!=0){
      inputLastNumber = (inputLastNumber * 10);
      rpm = rpm / 10;
    }
    rightShiftNumber = inputLastNumber/10 + rightShiftNumber;
    lastTwo = (rightShiftNumber % 10) + ((rightShiftNumber /10) % 10)*10;
    nextRpm = ssd + lastTwo;
    if((firstRpm * 8) < nextRpm){
      year = i;
      break;
    }
    else{
      inputNumber = nextRpm;
    }
  }
  cout << nextRpm << endl;
  return 0;
}
