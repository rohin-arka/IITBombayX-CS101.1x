// Consider the following program.
#include <iostream>
using namespace std;

void compute(int &j){
  int a = 1;
  j = a + j;
}
int generate(int i){
  int b = 1;
  i = b + i;
  return (i);
}

int main(){
int i,j;
for (j=0; j<5; j++){
    compute(j);
}
    for (i=0; i<5; i++){
      cout << i << endl;
     generate(i);
}
cout<< j;
cout<< i;
}

// ANswer: i is 5 and j = 6
