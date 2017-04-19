#include <iostream>
using namespace std;
int main(){
  int num;

  cout << "Enter a number :" << endl;
  cin >> num;

  switch(num){
    case 1:
      cout << "You have chosen to buy an iPad!";
      break;
    case 2:
      cout << "You have chosen to buy a Nokia tablet!";
      break;
    case 3:
      cout << "You have chosen to buy a Nokia tablet!";
      break;
    default:
      cout << "Ah!You seem to want an Aakash Tablet. Great choice!";
  }
  return 0;
  cout << endl;
}
