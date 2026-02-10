#include <stdio.h>

int main() {

    printf("NAVAL BATTLE \n");
    printf(". A B C D E \n");
    int board[5][6] = {
        {1, 0, 0, 0, 0, 0},
        {2, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0},
        {4, 0, 0, 0, 0, 0},
        {5, 0, 0, 0, 0, 0},
    };

    int ship1[3] = {2, 3, 4}; // row
    int ship2[3] = {1, 2, 3}; // colunm

    for (int i = 0 ; i < 3 ; i++) {
        if (board[4][ship1[i]]) break;
        board[4][ship1[i]] = 1;
    }
 
    for (int i = 0 ; i < 3 ; i++) {
        if (board[ship2[i]][3]) break;
        board[ship2[i]][3] = 2;
    }

    for (int i = 0 ; i < 5 ; i++) {
        for (int c = 0 ; c < 6 ; c++) {
            printf("%d ", board[i][c]);
        }
        printf("\n");
    }

    // old way 
    // for (int i = 0 ; i < 5 ; i++) {
    //     for(int c = 0 ; c < 6 ; c++) {

    //         if(i == 4 && ship1[0] == c) {
    //             for (int index = 0 ; index < 3 ; index++) {
    //                 printf("1 ");
    //             }
    //             c += 2;
    //         } else if (c == 5 && i < 3) {
    //             printf("2 ");
    //         } else {
    //             printf("%d ", board[i][c]);
    //         }
            
    //     };
    //     printf("\n");
    // };

}