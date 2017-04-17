#include <iostream>
using namespace std;
int sum(int n){
 if(n == 1){
   return 1;
 }else{
   return sum(n - 1) * n;
 }
}
int main(void){
  cout << sum(5) << endl;
}
// decomposition
// sum(4) * 5
// sum(3) * 4
// sum(2) * 3
// sum(1) * 2
// recomposition
// 2
// 6
// 24
// 120
