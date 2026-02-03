#include <stdio.h>

int main() {

    // welcome message
    printf("Welcome to super trunfo! \n");
    printf("Register your card, follow the instructions: \n");
    printf("=========== + =========== \n");

    // CARD 01

    // vars card 01
    int population, touristSpot;
    float stateArea, grossDomesticProduct;
    char idCard[4], nameCity[30];
    char state;

    // input state
    printf("Enter the State using only first letter: ");
    scanf(" %c", &state);

    // input card code
    printf("Enter the card code between 01 and 04: ");
    scanf("%s", idCard);

    // input name city
    printf("Enter the name of city (one-word): ");
    scanf("%s", nameCity);

    // input population
    printf("Enter the number of population: ");
    scanf("%i", &population);

    // input country area
    printf("Enter the state area (km2): ");
    scanf("%f", &stateArea);

    // input GDP
    printf("Enter the GDP of state: ");
    scanf("%f", &grossDomesticProduct);

    // input tourist attractions / tourist spots
    printf("Enter the number of tourist attractions: ");
    scanf("%i", &touristSpot);

    // output card 01
    printf("=========== CARD 01 =========== \n");
    printf("STATE: %c \n", state);
    printf("CARD CODE: %c%s \n", state, idCard);
    printf("NAME OF CITY: %s \n", nameCity);
    printf("POPULATION: %i \n", population);
    printf("STATE AREA: %.2fkm2 \n", stateArea);
    printf("GDP: US$%.2fbi \n", grossDomesticProduct);
    printf("NUMBER OF TOURIST ATTRACTIONS: %i \n", touristSpot);

    printf("=========== + =========== \n");
    printf("Now register the second card \n");
    printf("=========== + =========== \n");

    // CARD 02

    // vars card 02
    int population2, touristSpot2;
    float stateArea2, grossDomesticProduct2;
    char idCard2[4], nameCity2[30];
    char state2;

    // input state
    printf("Enter the State using only first letter: ");
    scanf(" %c", &state2);

    // input card code
    printf("Enter the card code between 01 and 04: ");
    scanf("%s", idCard2);

    // input name city
    printf("Enter the name of city (one-word): ");
    scanf("%s", nameCity2);

    // input population
    printf("Enter the number of population: ");
    scanf("%i", &population2);

    // input country area
    printf("Enter the state area (km2): ");
    scanf("%f", &stateArea2);

    // input GDP
    printf("Enter the GDP of state: ");
    scanf("%f", &grossDomesticProduct2);

    // input tourist attractions / tourist spots
    printf("Enter the number of tourist attractions: ");
    scanf("%i", &touristSpot2);

    // output card 01
    printf("CARD 01: \n");
    printf("STATE: %c \n", state);
    printf("CARD CODE: %c%s \n", state, idCard);
    printf("NAME OF CITY: %s \n", nameCity);
    printf("POPULATION: %i \n", population);
    printf("STATE AREA: %.2fkm2 \n", stateArea);
    printf("GDP: US$%.2fbi \n", grossDomesticProduct);
    printf("NUMBER OF TOURIST ATTRACTIONS: %i \n \n", touristSpot);

    // output card 02
    printf("CARD 02: \n");
    printf("STATE: %c \n", state2);
    printf("CARD CODE: %c%s \n", state2, idCard2);
    printf("NAME OF CITY: %s \n", nameCity2);
    printf("POPULATION: %i \n", population2);
    printf("STATE AREA: %.2fkm2 \n", stateArea2);
    printf("GDP: US$%.2fbi \n", grossDomesticProduct2);
    printf("NUMBER OF TOURIST ATTRACTIONS: %i \n", touristSpot2);

}