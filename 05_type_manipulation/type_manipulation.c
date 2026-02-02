#include <stdio.h>

int main() {

    int a = 10;
    int b = 3;

    // this will return only integer part of decimal number
    int c = a / b;
    printf("%i \n", c);

    // using float in this case and using cast 
    float d = (float) a / b;
    printf("%.2f \n", d);

}