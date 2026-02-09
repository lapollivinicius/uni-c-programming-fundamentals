#include <stdio.h>

void queen(int i) {
    if(i > 0) {
        printf("left \n");
        queen(i - 1);
    }
}
void bisp(int i) {

    if(i > 0) {
        printf("top \n");
        printf("left \n");
        bisp(i - 1);
    }
}

void tower(int i) {
    if(i > 0) {
        printf("right \n");
        tower(i - 1);
    }
}


int main() {

    // queen rec
    printf("QUEEN MOVE \n");
    queen(8);

    // horse for advanced
    printf("HORSE MOVE \n");
    for (int y = 2, x = 1 ; x > 0 || y > 0 ; y--) {

        if(y > 0) {
            printf("top \n");
            continue;
        }

        while (x > 0) {
            printf("right \n");
            x--;
        }

    }
    // bisp rec
    printf("BISP MOVE \n");
    bisp(5);

    // tower rec
    printf("TOWER MOVE \n");
    tower(5);
}