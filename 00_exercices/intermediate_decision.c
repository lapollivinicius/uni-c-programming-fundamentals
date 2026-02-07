#include <stdio.h>

int main() {

    // less than 12 -> child
    // between 12 to 18 -> teen
    // between 18 to 60 -> adult
    // more than 60 -> older


    int age = 0;
    char genre;

    printf("Digit your age: ");
    scanf(" %d", &age);

    printf("what is your genre (m/f): ");
    scanf(" %c", &genre);

    if (age < 12) {

        if (genre == 'm') {
            printf("you are a boy \n");
        } else if (genre == 'f') {
            printf("you are a girl \n");
        } else {
            printf("digit your genre using 'm' or 'f' ");
        }

    } else if ( age >= 12 && age < 18) {

        if (genre == 'm') {
            printf("you are a teen boy \n");
        } else if (genre == 'f') {
            printf("you are a teen girl \n");
        } else {
            printf("digit your genre using 'm' or 'f' ");
        }

    } else if ( age >= 18 && age < 60) {

        if (genre == 'm') {
            printf("you are a man \n");
        } else if (genre == 'f') {
            printf("you are a woman \n");
        } else {
            printf("digit your genre using 'm' or 'f' ");
        }

    } else if (age >= 60) {

        if (genre == 'm') {
            printf("you are a older man \n");
        } else if (genre == 'f') {
            printf("you are a older woman \n");
        } else {
            printf("digit your genre using 'm' or 'f' ");
        }

    }
}