#include<stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	if (num < 0) {
		printf("absolute value = %d\n", num*(-1));
	} else {
		printf("absolute value = %d\n", num);
	}
	return 0;
}
