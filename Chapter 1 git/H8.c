#include <stdio.h>

int main() {
    int fiveDigitNumber, reversedNumber = 0, remainder;

    printf("Enter a five-digit number: ");
    scanf("%d", &fiveDigitNumber);

    if (fiveDigitNumber >= 10000 && fiveDigitNumber <= 99999) {
        while (fiveDigitNumber > 0) {
            remainder = fiveDigitNumber % 10;
            reversedNumber = reversedNumber * 10 + remainder;
            fiveDigitNumber /= 10;
        }

        printf("Reversed number: %d\n", reversedNumber);
    } else {
        printf("Not Valid.\n");
    }

    return 0;
}

