#include <stdio.h>

int main() {
	int a, b;
	printf("enter percentage obtained in subject A & B:");
	scanf("%d%d", &a, &b);
	if((a >= 55 && b < 45) || (a < 55 && a >= 45 && b >=55)) {
		printf("passed\n");
	} else if (b < 45 && a >= 65) {
		printf("allowed to reapper in B.\n");
	} else {
		printf("Failed.\n");
	}
	return 0;
}
