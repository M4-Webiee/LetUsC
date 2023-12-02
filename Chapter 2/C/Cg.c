#include<stdio.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if (a+b+c == 180) {
		printf("is a valid triangle.");
	} else {
		printf("is not a valid triangle.");
	}
	return 0;
}
