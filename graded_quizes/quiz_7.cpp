#include <iostream>
using namespace std;
int main() {
    char s1 = 'd', s2;
    int i = 0, j = 0, k = 1;


    for(i = 0; i <= 3; i++) {
        s2 = s1;
        for(j = 0; j <= k; j++) {
            s2++;
            // cout << s2 << endl;
        }
        s1 = s1 + 2;
        k = k + 2;
    }

    cout << s2;
    return 0;
}

Answer: 'r'
