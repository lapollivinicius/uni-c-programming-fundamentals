#include <stdio.h>

#define ROW 3
#define COLUMN 3

int main() {

    int a = 0;

    int mrr[ROW][COLUMN];

    for(int i = 0 ; i < ROW ; i++) {
        for (int c = 0 ; c < COLUMN ; c++) {
            a++;
            mrr[i][c] = a;
            printf("%d ", mrr[i][c]);
        }
        printf("\n");
    }
}