#include <stdio.h>;
#include <string.h>;

int main() {

    // strcpy(destiny, origin) -> copy the string to other var
    // snprintf(destiny, length, format, ...) -> write a text formated

    // produc titles
    char productA[30] = "Product A";
    char productB[30] = "Product B";

    // product stocks
    unsigned int stockA = 200;
    unsigned int stockB = 800;

    // stock minimum
    unsigned int minimumStockA = 500;
    unsigned int minimumStockB = 500;

    // response to stock > minimum
    char responseStockA[50];
    char responseStockB[50];

    // condition to know if a product have minimum stock (A)
    if(stockA > minimumStockA) {
        snprintf(responseStockA, sizeof(responseStockA), "this product have suficient stock");
    } else {
        snprintf(responseStockA, sizeof(responseStockA),"this product dont't have suficient stock");
    }

    // condition to know if a product have minimum stock (B)
    if(stockB > minimumStockB) {
        snprintf(responseStockB, sizeof(responseStockB), "this product have suficient stock");
    } else {
        snprintf(responseStockB, sizeof(responseStockB),"this product dont't have suficient stock");
    }

    // price value product
    float priceA = (float) 100.00;
    float priceB = (float) 449.99;

    // total value in stock product
    double totalValueInStockA = priceA * stockA;
    double totalValueInStockB = priceB * stockB;

    // output A
    printf("\n ----------------- \n");
    printf("%s \n", productA);
    printf("stock: %u \n", stockA);
    printf("minimum: %u \n", minimumStockA);
    printf("%s \n", responseStockA);
    printf("price: US$%.2f \n", priceA);
    printf("total value: US$%.2f \n", totalValueInStockA);

    // output B
    printf(" ----------------- \n");
    printf("%s \n", productB);
    printf("stock: %u \n", stockB);
    printf("minimum: %u \n", minimumStockB);
    printf("%s \n", responseStockB);
    printf("price: US$%.2f \n", priceB);
    printf("total value: US$%.2f \n", totalValueInStockB);

    return 0;
}