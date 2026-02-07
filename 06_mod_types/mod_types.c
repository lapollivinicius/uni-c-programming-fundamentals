
#include <stdio.h>

int main() {

    // unsigned
    int a = 3000000000;
    unsigned int b = 4000000000;


    // %u -> unsigned
    printf("%d - %u \n", a, b);

    // %zu -> size t
    printf("%zu bytes \n", sizeof(a));
    printf("%zu bytes \n", sizeof(b));

    // long

    // it depends on the compiler
    long int c = 3000000000;

    double d = 3.34453;

    // %lf -> double / %Lf => long double
    printf("%d / %lf \n", c, d);
    printf("%zu bytes \n", sizeof(c));
    printf("%zu bytes \n", sizeof(d));

    // long long -> to only int

    long long int e = 5000000000;

    // %lld -> long long int
    printf("%lld \n", e);
    printf("%zu bytes \n", sizeof(e));

    // short

    short int f = 20000;

    printf("%d \n", f);
    printf("%zu bytes \n", sizeof(f));

    return 0;
}