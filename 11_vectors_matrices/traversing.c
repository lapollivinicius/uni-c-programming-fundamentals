#include <stdio.h>

int main() {

    int arr[3] = {1, 2, 3};

    for (int i = 0 ; i < 3 ; i++){
        arr[i] *= 2;
	    printf("%d ", arr[i]);
    };

    printf("\n-----\n");

    int mtt[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int i = 0 ; i < 3 ; i++) {
	    for (int c = 0 ; c < 3 ; c++) {
            mtt[i][c] *= 2; 
		    printf("%d ", mtt[i][c]);
	    };
	    printf("\n");
    }

    return 0;
}