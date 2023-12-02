#include <stdio.h>

int main() {
    int totalPopulation = 80000;
    float percentageMen = 52;
    float percentageTotalLiteracy = 48;
    float percentageLiterateMen = 35;

    int totalMen = (percentageMen / 100) * totalPopulation;

    int literateMen = (percentageLiterateMen / 100) * totalPopulation;

    int illiterateMen = totalMen - literateMen;

    int literatePeople = (percentageTotalLiteracy / 100) * totalPopulation;

    int illiteratePeople = totalPopulation - literatePeople;

    int illiterateWomen = illiteratePeople - illiterateMen;

    printf("Total number of illiterate men: %d\n", illiterateMen);
    printf("Total number of illiterate women: %d\n", illiterateWomen);

    return 0;
}

