#include <stdio.h>

float money = 4000;
float amount;
char option;

void drawMoney() {
        printf("how many you want withdraw: US$");
        scanf(" %f", &amount);
        money -= amount;
        printf("============= \n");
}
void depositMoney() {
    printf("how many you want deposit: US$");
    scanf(" %f", &amount);
    money += amount;
    printf("============= \n");
}

int main() {

    printf("============= \n");
    printf("welcome to the bank \n");
    printf("you have: US$%.2f \n", money);
    printf("press w to withdraw money \n");
    printf("press d to deposit money \n");
    printf("DIGIT: ");
    scanf(" %c", &option);

    switch(option) {
        case 'w':
            drawMoney();
        break;
        case 'd':
            depositMoney();
        break;
        default:
            printf("you need chose 'w' or 'd' \n");
        break;
    }
    printf("you have: US$%.2f \n", money);
}