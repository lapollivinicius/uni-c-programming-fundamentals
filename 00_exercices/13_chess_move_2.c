#include <stdio.h>

int main() {

    for (int move = 1 ; move < 3 ; move++) {
        printf("down \n");
        int move2 = 0;
        while((move2 < 1) && (move > 1)) {
            printf("left \n");
            move2++;
        }
    }

}