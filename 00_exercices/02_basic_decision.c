#include <stdio.h>

int main() {

    int number;

    printf("digit the number: ");
    scanf("%d", &number);

    int numberTest = number % 2;

    if (!numberTest) {
        printf("%d is even \n", number);
    } 
    if (numberTest) {
        printf("%d is odd \n", number);
    }

}