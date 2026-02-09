#include <stdio.h>

int main() {

    printf("MOVE OF TOWER \n");
    for (int T = 0; T < 5 ; T++) {
        printf("right \n");
    }

    printf("MOVE OF BISP \n");
    for (int T = 0; T < 5 ; T++) {
        printf("top, right \n");
    }

    printf("MOVE OF QUEEN \n");
    for (int T = 0; T < 8 ; T++) {
        printf("left \n");
    }

    return 0;
}