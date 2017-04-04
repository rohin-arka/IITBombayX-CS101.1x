// What will be the output of the following program, when it is executed.

#include <iostream>
using namespace std;
int main(void){
  int FACT = 1;
  for(unsigned int i = 6; i >= 0; --i){
    FACT *=1;
  }
  cout << FACT << endl;
  return 0;
}

// Answer: infinite loop
