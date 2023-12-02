#include <stdio.h>

int main() {
    int fiveDigitNumber, digit, sum = 0;

    printf("Enter a five-digit number: ");
    scanf("%d", &fiveDigitNumber);

    if (fiveDigitNumber >= 10000 && fiveDigitNumber <= 99999) {
        while (fiveDigitNumber > 0) {
            digit = fiveDigitNumber % 10;
            sum += digit;
            fiveDigitNumber /= 10;
        }

        printf("Sum of digits: %d\n", sum);
    } else {
        printf("Please enter a valid five-digit number.\n");
    }

    return 0;
}

