// General Instructions
//
// This is a GPA (Graded Programming Assignment) and the marks scored will be counted
// towards your final grade.
// Click on the 'student.cpp' file. Write your solution code within the start and end of
// respective functions (between opening and closing curly braces of the function) in
// 'student.cpp' file. Please make sure to read the comments given in the program. Click
// 'Compile' to compile your code, and 'Run' to execute your program and view the output.
// You can compile and execute your code as many times as you wish. Click 'Submit' to submit
// your code for grading. To view your grade, you will need to refresh your browser (Kindly
// read the note given below in red color).
// Please note that you are NOT supposed to write the function 'int main()'. Assume that
// it is already written.
// Do NOT delete or modify the existing code i.e. function definition, comments, etc.
// Do NOT write any INPUT or OUTPUT statements, i.e. no statements like cin, cout, scanf,
// printf, etc. should be included in your code.
// Note: When you refresh your browser, the code that you have written in the space provided
// will be lost. Make sure that you save it locally on your computer. If you want to save your
// program in this IDE i.e. (Project --> Save Changes), then you need to register and sign in on
// 'https://codeboard.io/

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
