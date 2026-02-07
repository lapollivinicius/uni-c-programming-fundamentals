#include <stdio.h>

int main() {

    // auxiliar var
    int a = 10;
    int b = 15;

    // great then
    int gt = a > b;

    // less then
    int lt = a < b;

    // great or equal then
    int get = a >= b;

    // less or equal then
    int let = a <= b;

    // equal then
    int e = a == b;

    // different
    int d = a != b;

    printf("%d \n", gt);
    printf("%d \n", lt);
    printf("%d \n", get);
    printf("%d \n", let);
    printf("%d \n", e);
    printf("%d \n", d);

    return 0;
}