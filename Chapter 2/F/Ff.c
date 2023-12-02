#include<stdio.h>

int main() {
	int s1, s2, s3;
	printf("enter the 3 sides of triangle:");
	scanf("%d %d %d", &s1, &s2, &s3);
	if (s1 + s2 > s3 || s1 + s3 > s2 || s3 + s2 > s1) {
		printf("is a valid triangle.\n");
	} else {
		printf("is not a valid triangle.\n");
	}
	return 0;
}
