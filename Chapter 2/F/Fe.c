#include <stdio.h>

int main() {
	int fine, days;
	printf("enter days: ");
	scanf("%d", &days);
	if (days < 5) {
		printf("fine 50 paise\n");
	} else if (days < 10) {
		printf("fine 1 rupee\n");
	} else if (days < 31) {
		printf("fine 10 rupees\n");
	} else {
		printf("your membership will be cancelled.");
	}
	return 0;
}
