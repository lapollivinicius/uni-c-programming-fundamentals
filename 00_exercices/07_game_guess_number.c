#include <stdio.h>
#include <stdlib.h> // to rand()
#include <time.h> // to time()

unsigned int option, randomNumber, number;

void onGame() {
    printf("starting game... \n");

    // random number according with time
    srand(time(0));

    // random number between 0 and 9
    randomNumber = rand() % 10;

    printf("digit a number between 0 and 9: ");
    scanf(" %d", &number);

    if(number == randomNumber) {
        printf("you won \n");
    } else {
        printf("you lost \n");
    }
    printf("the number was %d \n", randomNumber);
    
}

int main() {

    printf("=============== \n");
    printf("WELCOME THE GAME \n");
    printf("1. Start the game \n");
    printf("2. See rule and start \n");
    printf("3. Leave the game \n");
    printf("select an option: ");
    scanf("%d", &option);

    switch(option) {
        case 1: 
            onGame();
        break;
        case 2: 
            printf("============= \n");
            printf("RULES \n");
            printf("you just need to guess the exact number that will be generated \n");
            printf("IMPORTANTE! Digit a number between 0 and 9 \n");
            onGame();
        break;
        case 3:
            printf("leaving game... \n");
        break;
        default:
            printf("select 1, 2 or 3 \n");
        break;
    }

    printf("end of game! \n"); 
}