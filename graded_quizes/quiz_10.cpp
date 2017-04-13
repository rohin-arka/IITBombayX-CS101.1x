#include <iostream>
using namespace std;
int main(void){
  long long int firstRpm, inputNumber, rightShiftNumber, ssd, inalRPM, rpm = 6924;
  int inputLastNumber, lastTwo, years;
  firstRpm = rpm;
  inputNumber = firstRpm;
  for(int i = 1; i < 11; i++){
    ssd = 0, inputLastNumber = 0, rightShiftNumber = 0;
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
    finalRPM = ssd + lastTwo;
    years = i;
    if((firstRpm * 8) < finalRPM){
      break;
    }
    else{
      inputNumber = finalRPM;
   }
  }
  cout << years << endl;
  cout << finalRPM << endl;
  return 0;
}
