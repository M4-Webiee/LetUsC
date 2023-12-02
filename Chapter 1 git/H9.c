#include <stdio.h>

int main() {
    int fourDigitNumber, firstDigit, lastDigit, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &fourDigitNumber);

    if (fourDigitNumber >= 1000 && fourDigitNumber <= 9999) {
        lastDigit = fourDigitNumber % 10;
        firstDigit = fourDigitNumber / 1000;

        sum = firstDigit + lastDigit;

        printf("Sum of the first and last digit: %d\n", sum);
    } else {
        printf("Please enter a valid four-digit number.\n");
    }

    return 0;
}

