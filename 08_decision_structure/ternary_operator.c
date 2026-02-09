#include <stdio.h>
#include <string.h>

int main() {

    int a = 1;
    int b = 2;
    char result[40] = "";

    strncpy(result, (a > b) ? "a is greater than b" : "b is greater than a", sizeof(result));

    printf("%s \n", result);

    return 0;
}