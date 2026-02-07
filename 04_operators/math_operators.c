#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int c = 0;

    // add
    c = a + b;
    printf("%i \n", c);

    // subtract
    c = a - b;
    printf("%i \n", c);

    // times
    c = a * b;
    printf("%i \n", c);

    // divide
    c = a / b;
    printf("%i \n", c);

    // Assignment with add (can be with times, subtract and divide)
    c += a;
    printf("%i \n", c);

    // increase (can be decrease using c--)
    c++;
    printf("%i \n", c);

    // pre-increase (can be pre-decrease using --c)
    ++c;
    printf("%i \n", c);

    return 0;
}