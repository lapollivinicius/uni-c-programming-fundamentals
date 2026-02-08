#include <stdio.h>
#include <string.h>

int main() {

    // label welcome message and register card 01
    printf("Welcome to super trunfo! \n");
    printf("Register your card, follow the instructions: \n");
    printf("=========== + =========== \n");

    // CARD 01

    // vars card 01
    int population, touristSpot;
    float stateArea, grossDomesticProduct, populationDensity, perCapita, power, totalPoints;
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

    // calculation population density 
    populationDensity = (float) population / stateArea;

    // calculation GDP per capita
    perCapita = (float) grossDomesticProduct / population;

    // calculation power
    power = (float) population + stateArea + grossDomesticProduct + touristSpot + perCapita + (stateArea / population);

    // calculation total points without population density
    totalPoints = (float) population + stateArea + grossDomesticProduct + touristSpot + perCapita;

    // output card 01
    printf("=========== CARD 01 =========== \n");
    printf("STATE: %c \n", state);
    printf("CARD CODE: %c%s \n", state, idCard);
    printf("NAME OF CITY: %s \n", nameCity);
    printf("POPULATION: %i \n", population);
    printf("STATE AREA: %.2fkm2 \n", stateArea);
    printf("GDP: US$%.2fbi \n", grossDomesticProduct);
    printf("Number of Tourist Attractions: %i \n", touristSpot);
    printf("Population Density: %.2f \n", populationDensity);
    printf("GDP per capita: %.2f \n", perCapita);
    printf("Super Power: %f \n", (float)power);

    // label to register card 02
    printf("=========== + =========== \n");
    printf("Now register the second card \n");
    printf("=========== + =========== \n");

    // CARD 02

    // vars card 02
    int population2, touristSpot2;
    float stateArea2, grossDomesticProduct2, populationDensity2, perCapita2, power2, totalPoints2;
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

    // calculation population density
    populationDensity2 = (float) population2 / stateArea2;

    // calculation GDP per capita
    perCapita2 = (float) grossDomesticProduct2 / population2;

    // calculation power
    power2 = (float) population2 + stateArea2 + grossDomesticProduct2 + touristSpot2 + perCapita2 + (stateArea2 / population2);

    // calculation total points without population density
    totalPoints2 = (float) population2 + stateArea2 + grossDomesticProduct2 + touristSpot2 + perCapita2;

    // output card 01
    printf("=========== + =========== \n");
    printf("CARD 01: \n");
    printf("STATE: %c \n", state);
    printf("CARD CODE: %c%s \n", state, idCard);
    printf("NAME OF CITY: %s \n", nameCity);
    printf("POPULATION: %i \n", population);
    printf("STATE AREA: %.2fkm2 \n", stateArea);
    printf("GDP: US$%.2fbi \n", grossDomesticProduct);
    printf("Number of Tourist Attractions: %i \n", touristSpot);
    printf("Population Density: %.2f person/km2 \n", populationDensity);
    printf("GDP per capita: US$%.2f \n", perCapita); 
    printf("Super Power: %f \n", (float)power);

    // output card 02
    printf("=========== + =========== \n");
    printf("CARD 02: \n");
    printf("STATE: %c \n", state2);
    printf("CARD CODE: %c%s \n", state2, idCard2);
    printf("NAME OF CITY: %s \n", nameCity2);
    printf("POPULATION: %i \n", population2);
    printf("STATE AREA: %.2fkm2 \n", stateArea2);
    printf("GDP: US$%.2fbi \n", grossDomesticProduct2);
    printf("Number of Tourist Attractions: %i \n", touristSpot2);
    printf("Population Density: %.2f person/km2 \n", populationDensity2);
    printf("GDP per capita: US$%.2f \n", perCapita2); 
    printf("Super Power: %f \n", (float)power2);

    // output of comparison

    int option;

    printf("=========== + =========== \n");
    printf("Witch atribute you chose? \n");
    printf("1. Population \n");
    printf("2. Area \n");
    printf("3. GDP \n");
    printf("4. Tourist spot \n");
    printf("5. Population Density \n");
    printf("What?: ");
    scanf("%d", &option);

    switch(option) {
        case 1: 
            printf("=========== + =========== \n");
            if(population > population2) {
                printf("1. %s \n", nameCity);
                printf("2. Population \n");
                printf("3. %d \n", population);
                printf("4. CARD 01 \n");
            } else if (population == population2) {
                printf("1. No winners \n");
            } else {
                printf("1. %s \n", nameCity2);
                printf("2. Population \n");
                printf("3. %d \n", population2);
                printf("4. CARD 02 \n");
            }
        break;
        case 2: 
            printf("=========== + =========== \n");
            if(stateArea > stateArea2) {
                printf("1. %s \n", nameCity);
                printf("2. Area \n");
                printf("3. %f \n", stateArea);
                printf("4. CARD 01 \n");
            } else if (stateArea == stateArea2) {
                printf("1. No winners \n");
            } else {
                printf("1. %s \n", nameCity2);
                printf("2. Area \n");
                printf("3. %f \n", stateArea2);
                printf("4. CARD 02 \n");
            }
        break;
        case 3: 
            printf("=========== + =========== \n");
            printf("GDP \n");
            if(grossDomesticProduct > grossDomesticProduct2) {
                printf("1. %s \n", nameCity);
                printf("2. GDP \n");
                printf("3. %f \n", grossDomesticProduct);
                printf("4. CARD 01 \n");
            } else if (grossDomesticProduct == grossDomesticProduct2) {
                printf("1. No winners \n");
            } else {
                printf("1. %s \n", nameCity2);
                printf("2. GDP \n");
                printf("3. %f \n", grossDomesticProduct2);
                printf("4. CARD 02 \n");
            }
        break;
        case 4: 
            printf("=========== + =========== \n");
            if(touristSpot > touristSpot2) {
                printf("1. %s \n", nameCity);
                printf("2. Tourist spot \n");
                printf("3. %d \n", touristSpot);
                printf("4. CARD 01 \n");
            } else if (touristSpot == touristSpot2) {
                printf("1. No winners \n");
            } else {
                printf("1. %s \n", nameCity2);
                printf("2. Tourist spot \n");
                printf("3. %d \n", touristSpot2);
                printf("4. CARD 02 \n");
            }
        break;
        case 5: 
            printf("=========== + =========== \n");
            printf("Population Density \n");
            if(populationDensity > populationDensity2) {
                printf("1. %s \n", nameCity);
                printf("2. Population Density \n");
                printf("3. %f \n", populationDensity);
                printf("4. CARD 01 \n");
            } else if (populationDensity == populationDensity2) {
                printf("1. No winners \n");
            } else {
                printf("1. %s \n", nameCity2);
                printf("2. Population Density \n");
                printf("3. %f \n", populationDensity2);
                printf("4. CARD 02 \n");
            }
        break;
        default: 
            printf("=========== + =========== \n");
            printf("Digit 1,2,3,4 or 5 \n");
        break;
    }   

}