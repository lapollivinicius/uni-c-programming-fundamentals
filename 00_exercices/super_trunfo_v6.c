#include <stdio.h>
#include <string.h>

int main() {

    // label welcome message and register card 01
    printf("Welcome to super trunfo! \n");

    // vars card 01
    int population, touristSpot;
    float stateArea, grossDomesticProduct, populationDensity, perCapita, power, totalPoints;
    char state;

    // vars card 02
    int population2, touristSpot2;
    float stateArea2, grossDomesticProduct2, populationDensity2, perCapita2, power2, totalPoints2;
    char state2;

    // input card 1
    state = 'S';
    char idCard[4] = "S04";
    char nameCity[30] = "Sampa";
    stateArea = 1200;
    population = 1200000;
    grossDomesticProduct = 3500000000;
    touristSpot = 120;

    // calculation population density 
    populationDensity = (float) population / stateArea;

    // calculation GDP per capita
    perCapita = (float) grossDomesticProduct / population;

    // calculation power
    power = (float) population + stateArea + grossDomesticProduct + touristSpot + perCapita + (stateArea / population);

    // calculation total points without population density
    totalPoints = (float) population + stateArea + grossDomesticProduct + touristSpot + perCapita;

    // input card 2
    state2 = 'R';
    char idCard2[4] = "R01";
    char nameCity2[30] = "RJ";
    stateArea2 = 1100;
    population2 = 199200;
    grossDomesticProduct2 = 3200000000;
    touristSpot2 = 200;

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
    int option, option2;

    printf("=========== + =========== \n");
    printf("Witch atribute you chose? \n");
    printf("1. Population \n");
    printf("2. Area \n");
    printf("3. GDP \n");
    printf("4. Tourist spot \n");
    printf("5. Population Density \n");
    printf("What atribute?: ");
    scanf(" %d", &option);

    printf("=========== + =========== \n");
    if(option != 1) printf("1. Population \n");
    if(option != 2) printf("2. Area \n");
    if(option != 3) printf("3. GDP \n");
    if(option != 4) printf("4. Tourist spot \n");
    if(option != 5) printf("5. Population Density \n");
    
    printf("Now, select other atribute: ");
    scanf(" %d", &option2);

    if(option == option2) printf("you cannot chose the same atribute \n");

    int pWinner, aWinner, gWinner, touristWinner, dWinner;

    printf("=========== + =========== \n");

    switch(option) {
        case 1:
            switch(option2) {
                case 2:
                    if (population > population2 && stateArea > stateArea2) {
                        aWinner = 1;
                    } else if(population < population2 && stateArea < stateArea2) {
                        aWinner = 2;
                    } else {
                        aWinner = 0;
                    }

                    if(aWinner == 1) printf("The card 01 is the winner \n");
                    if(aWinner == 2) printf("The card 02 is the winner \n");
                    if(aWinner == 0) printf("there is no winners \n");
                break;
                case 3:
                    if (population > population2 && grossDomesticProduct > grossDomesticProduct2) {
                        gWinner = 1;
                    } else if(population < population2 && grossDomesticProduct2 < grossDomesticProduct2) {
                        gWinner = 2;
                    } else {
                        gWinner = 0;
                    }

                    if(gWinner == 1) printf("The card 01 is the winner \n");
                    if(gWinner == 2) printf("The card 02 is the winner \n");
                    if(gWinner == 0) printf("there is no winners \n");
                break;
                case 4:
                    if (population > population2 && touristSpot > touristSpot2) {
                        touristWinner = 1;
                    } else if(population < population2 && touristSpot < touristSpot2) {
                        touristWinner = 2;
                    } else {
                        touristWinner = 0;
                    }

                    if(touristWinner == 1) printf("The card 01 is the winner \n");
                    if(touristWinner == 2) printf("The card 02 is the winner \n");
                    if(touristWinner == 0) printf("there is no winners \n");
                break;
                case 5:
                    if (population > population2 && populationDensity < populationDensity2) {
                        dWinner = 1;
                    } else if(population < population2 && populationDensity > populationDensity2) {
                        dWinner = 2;
                    } else {
                        dWinner = 0;
                    }

                    if(dWinner == 1) printf("The card 01 is the winner \n");
                    if(dWinner == 2) printf("The card 02 is the winner \n");
                    if(dWinner == 0) printf("there is no winners \n");
                break;
                default:
                    printf("select only one that list \n");
                break;
            }
        break;
        case 2:
            switch(option2) {
                case 1:
                    if (population > population2 && stateArea > stateArea2) {
                        pWinner = 1;
                    } else if(population < population2 && stateArea < stateArea2) {
                        pWinner = 2;
                    } else {
                        pWinner = 0;
                    }

                    if(pWinner == 1) printf("The card 01 is the winner \n");
                    if(pWinner == 2) printf("The card 02 is the winner \n");
                    if(pWinner == 0) printf("there is no winners \n");
                break;
                case 3:
                    if (stateArea > stateArea2 && grossDomesticProduct > grossDomesticProduct2) {
                        gWinner = 1;
                    } else if(stateArea < stateArea2 && grossDomesticProduct < grossDomesticProduct2) {
                        gWinner = 2;
                    } else {
                        gWinner = 0;
                    }

                    if(gWinner == 1) printf("The card 01 is the winner \n");
                    if(gWinner == 2) printf("The card 02 is the winner \n");
                    if(gWinner == 0) printf("there is no winners \n");
                break;
                case 4:
                    if (stateArea > stateArea2 && touristSpot > touristSpot2) {
                        touristWinner = 1;
                    } else if(stateArea < stateArea2 && touristSpot < touristSpot2) {
                        touristWinner = 2;
                    } else {
                        touristWinner = 0;
                    }

                    if(touristWinner == 1) printf("The card 01 is the winner \n");
                    if(touristWinner == 2) printf("The card 02 is the winner \n");
                    if(touristWinner == 0) printf("there is no winners \n");
                break;
                case 5:
                    if (stateArea > stateArea2 && populationDensity < populationDensity2) {
                        dWinner = 1;
                    } else if(stateArea < stateArea2 && populationDensity > populationDensity2) {
                        dWinner = 2;
                    } else {
                        dWinner = 0;
                    }

                    if(dWinner == 1) printf("The card 01 is the winner \n");
                    if(dWinner == 2) printf("The card 02 is the winner \n");
                    if(dWinner == 0) printf("there is no winners \n");
                break;
                default:
                    printf("select only one that list \n");
                break;
    }
        break;
        case 3:
            switch(option2) {
                case 1:
                    if (population > population2 && grossDomesticProduct > grossDomesticProduct2) {
                        pWinner = 1;
                    } else if(population < population2 && grossDomesticProduct < grossDomesticProduct2) {
                        pWinner = 2;
                    } else {
                        pWinner = 0;
                    }

                    if(pWinner == 1) printf("The card 01 is the winner \n");
                    if(pWinner == 2) printf("The card 02 is the winner \n");
                    if(pWinner == 0) printf("there is no winners \n");
                break;
                case 2:
                    if (stateArea > stateArea2 && grossDomesticProduct > grossDomesticProduct2) {
                        aWinner = 1;
                    } else if(stateArea < stateArea2 && grossDomesticProduct2 < grossDomesticProduct2) {
                        aWinner = 2;
                    } else {
                        aWinner = 0;
                    }

                    if(aWinner == 1) printf("The card 01 is the winner \n");
                    if(aWinner == 2) printf("The card 02 is the winner \n");
                    if(aWinner == 0) printf("there is no winners \n");
                break;
                case 4:
                    if (grossDomesticProduct > grossDomesticProduct2 && touristSpot > touristSpot2) {
                        touristWinner = 1;
                    } else if(grossDomesticProduct < grossDomesticProduct2 && touristSpot < touristSpot2) {
                        touristWinner = 2;
                    } else {
                        touristWinner = 0;
                    }

                    if(touristWinner == 1) printf("The card 01 is the winner \n");
                    if(touristWinner == 2) printf("The card 02 is the winner \n");
                    if(touristWinner == 0) printf("there is no winners \n");
                break;
                case 5:
                    if (grossDomesticProduct > grossDomesticProduct2 && populationDensity < populationDensity2) {
                        dWinner = 1;
                    } else if(grossDomesticProduct < grossDomesticProduct2 && populationDensity > populationDensity2) {
                        dWinner = 2;
                    } else {
                        dWinner = 0;
                    }

                    if(dWinner == 1) printf("The card 01 is the winner \n");
                    if(dWinner == 2) printf("The card 02 is the winner \n");
                    if(dWinner == 0) printf("there is no winners \n");
                break;
                default:
                    printf("select only one that list \n");
                break;
            }
        break;
        case 4:
            switch(option2) {
                case 1:
                    if (population > population2 && touristSpot > touristSpot2) {
                        pWinner = 1;
                    } else if(population < population2 && touristSpot < touristSpot2) {
                        pWinner = 2;
                    } else {
                        pWinner = 0;
                    }

                    if(pWinner == 1) printf("The card 01 is the winner \n");
                    if(pWinner == 2) printf("The card 02 is the winner \n");
                    if(pWinner == 0) printf("there is no winners \n");
                break;
                case 2:
                    if (stateArea > stateArea2 && touristSpot > touristSpot2) {
                        aWinner = 1;
                    } else if(stateArea < stateArea2 && touristSpot < touristSpot2) {
                        aWinner = 2;
                    } else {
                        aWinner = 0;
                    }

                    if(aWinner == 1) printf("The card 01 is the winner \n");
                    if(aWinner == 2) printf("The card 02 is the winner \n");
                    if(aWinner == 0) printf("there is no winners \n");
                break;
                case 3:
                    if (grossDomesticProduct > grossDomesticProduct2 && touristSpot > touristSpot2) {
                        gWinner = 1;
                    } else if(grossDomesticProduct < grossDomesticProduct2 && touristSpot < touristSpot2) {
                        gWinner = 2;
                    } else {
                        gWinner = 0;
                    }

                    if(gWinner == 1) printf("The card 01 is the winner \n");
                    if(gWinner == 2) printf("The card 02 is the winner \n");
                    if(gWinner == 0) printf("there is no winners \n");
                break;
                case 5:
                    if (touristSpot > touristSpot2 && populationDensity < populationDensity2) {
                        dWinner = 1;
                    } else if(touristSpot < touristSpot2 && populationDensity > populationDensity2) {
                        dWinner = 2;
                    } else {
                        dWinner = 0;
                    }

                    if(dWinner == 1) printf("The card 01 is the winner \n");
                    if(dWinner == 2) printf("The card 02 is the winner \n");
                    if(dWinner == 0) printf("there is no winners \n");
                break;
                default:
                    printf("select only one that list \n");
                break;
            }
        break;
        case 5:
            switch(option2) {
                case 1:
                    if (population > population2 && populationDensity < populationDensity2) {
                        pWinner = 1;
                    } else if(population < population2 && populationDensity > populationDensity2) {
                        pWinner = 2;
                    } else {
                        pWinner = 0;
                    }

                    if(pWinner == 1) printf("The card 01 is the winner \n");
                    if(pWinner == 2) printf("The card 02 is the winner \n");
                    if(pWinner == 0) printf("there is no winners \n");
                break;
                case 2:
                    if (stateArea > stateArea2 && populationDensity < populationDensity2) {
                        aWinner = 1;
                    } else if(stateArea < stateArea2 && populationDensity > populationDensity2) {
                        aWinner = 2;
                    } else {
                        aWinner = 0;
                    }

                    if(aWinner == 1) printf("The card 01 is the winner \n");
                    if(aWinner == 2) printf("The card 02 is the winner \n");
                    if(aWinner == 0) printf("there is no winners \n");
                break;
                case 3:
                    if (grossDomesticProduct > grossDomesticProduct2 && populationDensity < populationDensity2) {
                        gWinner = 1;
                    } else if(grossDomesticProduct < grossDomesticProduct2 && populationDensity > populationDensity2) {
                        gWinner = 2;
                    } else {
                        gWinner = 0;
                    }

                    if(gWinner == 1) printf("The card 01 is the winner \n");
                    if(gWinner == 2) printf("The card 02 is the winner \n");
                    if(gWinner == 0) printf("there is no winners \n");
                break;
                case 5:
                    if (touristSpot > touristSpot2 && populationDensity < populationDensity2) {
                        touristWinner = 1;
                    } else if(touristSpot < touristSpot2 && populationDensity > populationDensity2) {
                        touristWinner = 2;
                    } else {
                        touristWinner = 0;
                    }

                    if(touristWinner == 1) printf("The card 01 is the winner \n");
                    if(touristWinner == 2) printf("The card 02 is the winner \n");
                    if(touristWinner == 0) printf("there is no winners \n");
                break;
                default:
                    printf("select only one that list \n");
                break;
            }
        break;
        default:
            printf("invalid option \n");
        break;
    }
    
}