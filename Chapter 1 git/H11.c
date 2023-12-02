#include <stdio.h>

int main() {
    int withdrawalAmount, fifties, tens;

    printf("Enter the amount to be withdrawn in hundreds: ");
    scanf("%d", &withdrawalAmount);

    fifties =  withdrawalAmount*2;
    tens = withdrawalAmount * 10;  

    printf("Number of 100s: %d\n", withdrawalAmount);
    printf("Number of 50s: %d\n", fifties);
    printf("Number of 10s: %d\n", tens);

    return 0;
}

