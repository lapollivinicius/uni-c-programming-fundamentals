#include <stdio.h>

int main() {

    // auxiliar var
    int a = 10;
    int b = 15;

    // great then
    bool gt = a > b;

    // less then
    bool lt = a < b;

    // great or equal then
    bool get = a >= b;

    // less or equal then
    bool let = a <= b;

    // equal then
    bool e = a == b;

    // different
    bool d = a != b;

    printf("%d \n", gt);
    printf("%d \n", lt);
    printf("%d \n", get);
    printf("%d \n", let);
    printf("%d \n", e);
    printf("%d \n", d);

}