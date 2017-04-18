// Write a C++ Program to print the ASCII value of a given character.
// Accept the character as input from the user. Sample input/output statements are given below:
//    Enter a character: F
//    The ASCII value of character F is 70
#include <iostream>
using namespace std;

int characterToASCII(char character){
  return (int(character));
}
int main(){
  char inputCharacter;

  cout << "This program turns user input character on its ascii value i.e. computer representation" << endl;

  cout << endl << "Enter a character:" << endl;

  cin >> inputCharacter;

  cout << "The ASCII value of character " << inputCharacter << " is ";

  cout << characterToASCII(inputCharacter) << endl;
}
