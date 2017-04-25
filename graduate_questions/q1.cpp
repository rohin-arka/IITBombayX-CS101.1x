#include <iostream>
using namespace std;
void gumboy (int dog, int fox, int &cutter) {
  dog = fox + cutter;
  fox = dog + cutter;
  cutter = dog + fox;
}

int main () {
  int over, cutcut;
  over = 92;
  cutcut = 181;
  gumboy(over, cutcut, cutcut);
  cout << over;
  cout << cutcut;
  return 0;
}

// What will be printed by the statement cout << over;.
// Write the number in the textbox given below. Please make sure that you do not
// enter any space in the textbox.
// => 92

//
// What will be printed by the statement cout << cutcut;. Write the number in the
// textbox given below. Please make sure that you do not enter any space in the textbox.
// => 905
