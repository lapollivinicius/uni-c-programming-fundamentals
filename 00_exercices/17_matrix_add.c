#include <stdio.h>

int main() {

    int mrr1[2][2] = {{1, 2}, {3, 4}};
    int mrr2[2][2] = {{5, 6}, {7, 8}};
    int mrr3[2][2];

    for (int i = 0 ; i < 2 ; i++) {

        for (int c = 0 ; c < 2 ; c++) {

            mrr3[i][c] = mrr1[i][c] + mrr2[i][c];

            printf("%d ", mrr3[i][c]);

        }
        printf("\n");

    }


}