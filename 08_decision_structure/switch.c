#include <stdio.h>

int main() {

    int number;

    printf("digit a number between 0 to 5: ");
    scanf(" %d", &number);

    switch(number) {
        case 0:
            printf("you choose 0 \n");
            break;
        case 1:
            printf("you choose 1 \n");
            break;
        case 2:
            printf("you choose 2 \n");
            break;
        case 3:
            printf("you choose 3 \n");
            break;
        case 4:
            printf("you choose 4 \n");
            break;
        case 5:
            printf("you choose 5 \n");
            break;
        default:
            printf("digit a number between 0 to 5 \n");
            break;
    }

    return 0;
}