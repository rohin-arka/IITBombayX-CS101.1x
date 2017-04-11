int main () {
    int a = 6;
    int num1, num2;
    num1 = 672;
    num2 = 54;

    for ( ; ; ) {
       a = a * 3;
       if(a > num1) {
          a = a - 5;
          break;
        }
    }

    while(true) {
        a = a / 3;
        if(a < num2) {
            a = a - 5;
            break;
        }
    }
    cout << a;
    return 0;
}

// Answer: 48
