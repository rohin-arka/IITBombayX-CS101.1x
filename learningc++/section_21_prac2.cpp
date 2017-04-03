// give two integers inputs m and n
// calculate 3 raise to min(m.n) 2 raise to max(m. n)
#include <iostream>
using namespace std;
int main(void){
  int m, n, min, max, threeTimes = 0;
  cout << "Enter m and n" << endl;
  cin >> m >> n;
  min = m < n ? m : n;
  max = m > n ? m : n;
  for(int i = 0; i < min; i++){
    threeTimes += 3 * 3;
  }
  cout << threeTimes << endl;
}
