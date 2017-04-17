#include <iostream>
using namespace std;
int generate (int n) {
    if (n != 0)
        n = n + generate(n-1);
    return n;
}

int main() {
    int n = 6;
    cout << generate(n);
    return 0;
}
// Answer: 21
// explanation
// generate(6) = 6 + generate(5)
// generate(5) = 5 + generate(4)
// generate(4) = 4 + generate(3)
// generate(3) = 3 + generate(2)
// generate(2) = 2 + generate(1)
// generate(1) = 1 + generate(0)
// generate(0) = 0
//
// We now start substituting the values
// generate(0) = 0
// generate(1) = 1 + generate(0) = 1 +  0  =  1
// generate(2) = 2 + generate(1) = 2 +  1  =  3
// generate(3) = 3 + generate(2) = 3 +  3  =  6
// generate(4) = 4 + generate(3) = 4 +  6  = 10
// generate(5) = 5 + generate(4) = 5 + 10  = 15
// generate(6) = 6 + generate(5) = 6 + 15  = 21
//
// Thus, the answer is 21
