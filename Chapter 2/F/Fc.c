#include<stdio.h>

int main() {
	int ensured, age, city, premRate, maxAmt, health, male;
	printf("age: ");
	scanf("%d", &age);
	printf("are you male(0/1): ");
	scanf("%d", &male);
	printf("do you live in city(0/1): ");
	scanf("%d", &city);
	printf("are you in excellent health(0/1):");
	scanf("%d", &health);
	ensured = 1;
	if (health == 1 && (age < 36 && age > 24) && city == 1) {
		if (male == 1) {
			premRate = 4;
			maxAmt = 200000;
		} else {
			premRate = 3;
			maxAmt = 100000;
		}
	} else if (health == 0 && (age < 36 && age > 24)&& city == 0 && male == 1) {
		premRate = 6;
		maxAmt = 10000;
	} else {
		ensured = 0;
	}
	if (ensured) {
		printf("You can be ensured for: \npremRate: %d && max amount: %d\n", premRate, maxAmt);
	} else {
		printf("You cannot be ensured.\n");
	}
	return 0;
}
