#include <stdio.h>

int main() {

    // less than 12 -> child
    // between 12 to 18 -> teen
    // between 18 to 60 -> adult
    // more than 60 -> older


    int age = 0;

    printf("Digit your age: ");
    scanf("%d", &age);

    if (age < 12) {
        printf("you are a kid \n");
    } else if ( age >= 12 && age < 18) {
        printf("you are a teenager \n");
    } else if ( age >= 18 && age < 60) {
        printf("you are a adult \n");
    } else if (age >= 60) {
        printf("you are a older \n");
    }
}