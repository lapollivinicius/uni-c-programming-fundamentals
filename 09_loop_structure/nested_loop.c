#include <stdio.h>

int main() {

    for (int i = 1 ; i < 6 ; i++) {
        for (int c = 1 ; c < 6 ; c++) {
            printf("%d x %d\n", i, c);
        }
    }
    
    return 0;
}