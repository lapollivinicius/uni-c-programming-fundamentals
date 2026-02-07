#include <stdio.h>

int main() {

    int a = 30;
    int b = 20;
    int c = 40;

    if (a > b && a > c) {
        printf("a is the greater number");
    } else if(b > c) {
        printf("b is the greater number");
    } else {
        printf("c is the greater number");
    }
}