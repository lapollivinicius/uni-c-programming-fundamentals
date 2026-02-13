#include <stdio.h>

int main() {

    int mtt[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0 ; i < 3 ; i++) {
	    for (int c = 0 ; c < 3 ; c++) {
            if(i == 1 && c == 1) {
                mtt[i][c] = 0;
            } 
		    printf("%d ", mtt[i][c]);
	    };
	    printf("\n");
    }

    return 0;
}