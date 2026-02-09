#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int number, random;

    

    printf("================ \n");
    printf("welcome to the game \n");
    printf("guess the right number \nyou have 3 chances\n");

    for (int chance = 0 ; chance < 3 ; chance++) {

        srand(time(0));
        random = rand() % 10 + 1;

        printf("what is your number between 0 to 10: ");
        scanf(" %d", &number);

        printf("================ \n");

        if(number == random) {
            printf("you won \n");
            printf("%d is equal %d \n", number, random);
            chance = 4;
        } else {
            printf("you lost \n");
            printf("%d isn't equal %d \n", number, random);
        }
        printf("================ \n");
    }

    return 0;
}