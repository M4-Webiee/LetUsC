#include <stdio.h>

int main() {
    float distanceInKilometers;
    float distanceInMeters, distanceInFeet, distanceInInches, distanceInCentimeters;

    scanf("%f", &distanceInKilometers);

    distanceInMeters = distanceInKilometers * 1000;
    distanceInFeet = distanceInMeters * 3.28084;
    distanceInInches = distanceInFeet * 12;
    distanceInCentimeters = distanceInMeters * 100;

    printf("Distance in meters: %.2f m\n", distanceInMeters);
    printf("Distance in feet: %.2f ft\n", distanceInFeet);
    printf("Distance in inches: %.2f in\n", distanceInInches);
    printf("Distance in centimeters: %.2f cm\n", distanceInCentimeters);

    return 0;
}

