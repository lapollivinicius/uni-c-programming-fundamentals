#include <stdio.h>

int main() {

    // arrays must be the same types
    // type name[amount_items] = {node_list...};
    int arr[3] = {1, 2, 3};

    // assigning values 
    int arr2[2];
    arr2[0] = 10;
    arr2[1] = 20;

    printf("%d \n", arr[0]);
    printf("%d \n", arr[1]);
    printf("%d \n", arr[2]);
    printf("%d \n", arr2[0]);
    printf("%d \n", arr2[1]);

    return 0;
}