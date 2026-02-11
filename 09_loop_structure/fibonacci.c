#include <stdio.h>

// int main() {

//     int a = 0;
//     int b = 1;
//     int c = 0;

//     printf("%d %d ", a, b);

//     for (int i = 0 ; i < 11 ; i++) {
//         c = a + b;
//         printf("%d ", c);
//         a = b;
//         b = c;
//     }

// }

int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n = 10;
    printf("%d\n", fib(n));
    return 0;
}

/*
10 
-> 9 8 
-> 8 7 / 7 6 
-> 7 6 / 6 5 / 6 5 / 5 4
-> 6 5 / 5 4 / 5 4 / 4 3 / 5 4 / 4 3 / 4 3 / 3 2
-> 
*/