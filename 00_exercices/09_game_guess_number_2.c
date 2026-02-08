#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int option, option2, random, number;

    printf("=================== \n");
    printf("Welcome to the game \n");
    printf("1. Start Game \n");
    printf("2. See Rules and start \n");
    printf("3. Leave Game \n");
    printf("What?: ");
    scanf(" %d", &option);

    switch(option) {
        case 1:
            printf("=================== \n");
            printf("Chose one, little friend \n");
            printf("1. LT \n");
            printf("2. GT \n");    
            printf("3. E \n");
            printf("What?: ");
            scanf(" %d", &option2);

            srand(time(0));
            random = rand() % 10;

            printf("=================== \n");
            printf("now, digit your number between 0 to 10: ");
            scanf(" %d", &number);

            printf("=================== \n");

            switch(option2) {
                case 1:
                    if(number > random) {
                        printf("you won \n");
                        printf("%d is less than %d \n", number, random);
                    } else {
                        printf("you lost \n");
                        printf("%d isn't less than %d \n", number, random);
                    }
                    break;
                case 2:
                    if(number < random) {
                        printf("you won \n");
                        printf("%d is greater than %d \n", number, random);
                    } else {
                        printf("you lost \n");
                        printf("%d isn't greater than %d \n", number, random);
                    }
                    break;
                case 3:
                    if(number == random) {
                        printf("you won \n");
                        printf("%d is equals %d \n", number, random);
                    } else {
                        printf("you lost \n");
                        printf("%d isn't equals %d \n", number, random);
                    }
                    break;
                default: 
                    printf("you must chose 1, 2 or 3 \n");
                    break;
            }
        break;
        case 2: 
            printf("=================== \n");
            printf("Guess the number genarate randonly \n");
            printf("Chose LT to less than \n");
            printf("Chose GT to greater than \n");
            printf("Chose E to equals \n");
        break;
        case 3:
            printf("=================== \n");
            printf("leaving... \n");
        break;
        default:
            printf("=================== \n");
            printf("chose 1,2 or 3 \n");
        break;
    }
}