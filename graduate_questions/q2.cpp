#include <iostream>
using namespace std;
int magic (int k) {
  cout << k << endl;
   	if (k == 0)
              return 12;
   	if (k == 1)
              return 17;
    int a = ( magic (k - 2) );
    cout << endl;
    cout << k << endl;
   	return a;
}

int main () {
   int value = magic (5);
  //  cout << " Result : " << value << endl ;
   return 0;
}
