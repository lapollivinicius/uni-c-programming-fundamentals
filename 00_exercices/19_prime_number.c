#include <stdio.h>

int main() {

    int number, result = 0;

    printf("digit a number: ");
    scanf(" %d", &number);

    for (int i = 2 ; i <= (number-1) ; i++) {
        if (number % i == 0) {
            result = i;
            break;
        } 
    }
    if (result) {
        printf("\n%d is divided for %d \n", number, result);
    } else {
        printf("\n%d is prime \n", number);
    }
}