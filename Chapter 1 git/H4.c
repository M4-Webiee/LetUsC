#include <stdio.h>

int main() {
    float temperatureInFahrenheit, temperatureInCelsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temperatureInFahrenheit);

    temperatureInCelsius = (5.0 / 9.0) * (temperatureInFahrenheit - 32);

    printf("Temperature in Celsius: %.2f\n", temperatureInCelsius);

    return 0;
}

