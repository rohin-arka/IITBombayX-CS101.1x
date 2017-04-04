// How many times will the 'while' loop in the following code execute?

#include <iostream>
using namespace std;
int main(void){
  int a = 2, b = 5, expr_one, expr_two;

  expr_one = 5 * a - 2 * b;

  expr_two = (4 * a + 8 * b) % (b - 1);

  while((expr_one = expr_two)){
    cout << "loop 1" << endl;
  }

  return 0;
}

// Answer: 0
