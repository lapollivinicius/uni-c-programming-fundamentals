#include <stdio.h>

int main() {

    printf("NAVAL BATTLE \n");
    int board[11][11] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9}, 
        {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0},
    };

    int ship1[3] = {2, 3, 4}; // col
    int ship2[3] = {3, 4, 5}; // row
    int ship3[3] = {3, 2, 1}; // row-diagonal-left
    int ship4[3] = {3, 2, 1}; // col-diagonal-right

    // col in row 6
    for (int i = 0 ; i < 3 ; i++) {
        if (board[6][ship1[i]]) break;
        board[6][ship1[i]] = 1;
    }
    
    // row in col 7
    for (int i = 0 ; i < 3 ; i++) {
        if (board[ship2[i]][7]) break;
        board[ship2[i]][7] = 2;
    }

    // diagonal-col in row 3>1
    for (int i = 0 ; i < 3 ; i++) {
        if (board[3-i][ship3[i]]) break;
        board[3-i][ship3[i]] = 3;
    }
    
    // diagonal-row in col 5>7
    for (int i = 0 ; i < 3 ; i++) {
        if (board[ship4[i]][5+i]) break;
        board[ship4[i]][5+i] = 4;
    }


    // render
    for (int i = 0 ; i < 11 ; i++) {
        for (int c = 0 ; c < 11 ; c++) {
            printf("%d ", board[i][c]);
        }
        printf("\n");
    }

}