#include <stdio.h>

int main() {
	int year;
	scanf("%d", &year);
	((year%400 == 0) || (year%4 == 0 && year%100 != 0))?
	printf("%d is a leap year!", year): printf("%d is not a leap year!", year);
	return 0;
}

