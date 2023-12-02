#include <stdio.h>

int main() {
    int fiveDigitNumber, originalNumber, newNumber = 0, digit, placeValue = 1;

    printf("Enter a five-digit number: ");
    scanf("%d", &fiveDigitNumber);

    originalNumber = fiveDigitNumber;

    while (fiveDigitNumber > 0) {
        digit = (fiveDigitNumber % 10 + 1) % 10;  
        newNumber = newNumber + digit * placeValue;
        placeValue *= 10;
        fiveDigitNumber /= 10;
    }

    printf("Original number: %d\n", originalNumber);
    printf("New number: %d\n", newNumber);

    return 0;
}

