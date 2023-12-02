#include <stdio.h>

int main() {
    int original_number;
    printf("Enter a five-digit number: ");
    scanf("%d", &original_number);

    if (10000 <= original_number && original_number <= 99999) {
        int reversed_number = 0;
        int temp_number = original_number;

        while (temp_number > 0) {
            int digit = temp_number % 10;
            reversed_number = reversed_number * 10 + digit;
            temp_number = temp_number / 10;
        }

        if (original_number == reversed_number) {
            printf("Original number %d is equal to its reversed form.\n", original_number);
        } else {
            printf("Original number %d is not equal to its reversed form.\n", original_number);
        }
    } else {
        printf("Please enter a valid five-digit number.\n");
    }

    return 0;
}

