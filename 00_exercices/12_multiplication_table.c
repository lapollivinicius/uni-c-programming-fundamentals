#include <stdio.h>

int main() {

    for (int c = 1 ; c < 11 ; c++) {
        printf("----------------- \n");
        for (int i = 1 ; i < 11 ; i++) {
            printf("%d x %d = %d \n", c, i, (i * c));
        }
    }

    return 0;
}