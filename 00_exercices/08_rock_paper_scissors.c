#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int option, adversary;

int main() {

    // rock (1) -> beats scissors / win if ad was 3
    // paper (2) -> beats rock / win if ad was 1
    // scissors (3) -> beats paper / win if ad was 2
    
    srand(time(0));

    printf("------------------ \n");
    printf("welcome to R.P.S. \n");
    printf("1. ROCK \n");
    printf("2. PAPER \n");
    printf("3. SCISSORS \n");
    printf("------------------ \n");

    printf("ROCK, PAPER, SCISSORS: ");
    scanf(" %d", &option);

    printf("------------------ \n");

    adversary = rand() % 3 + 1;

    switch(adversary) {
        case 1: printf("ROCK X "); break;
        case 2: printf("PAPER X "); break;
        case 3: printf("SCISSORS X "); break;
    }

    switch(option) {
        case 1: printf("ROCK = "); break;
        case 2: printf("PAPER = "); break;
        case 3: printf("SCISSORS = "); break;
        default: printf("digit 1, 2 or 3"); break;
    }

    if (option > 3 || option < 0){
        printf("digit 1,2 or 3");
        return 0;
    }

    if (option == adversary) {
        printf("NO WINNERS \n");
    } else if (option == 1 && adversary == 3) {
        printf("YOU WON \n");
    } else if (option == 2 && adversary == 1) {
        printf("YOU WON \n");
    } else if (option == 3 && adversary == 2) {
        printf("YOU WON \n");
    } else {
        printf("YOU LOST \n");
    }

    return 0;
}