#include <iostream>
using namespace std;
int myFunction( int counter)
{
if(counter == 0)
     return 0;
else
       {
       return myFunction(counter-1) + myFunction(counter-1) ;
       }
}
int main(void){
  cout << myFunction(10) << endl;
}
