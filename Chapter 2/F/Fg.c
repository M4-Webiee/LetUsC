#include<stdio.h>

int main() {
	int s1, s2, s3;
	printf("enter the 3 sides of triangle:");
	scanf("%d %d %d", &s1, &s2, &s3);
	if(s1 == s2 && s2 == s3) {
		printf("is an equilateral triangle.\n");
	} else if (s1 == s2 || s1 == s3 || s2 == s3) {
		printf("is an isosceles triangle.\n");
	} else if (s1*s1 == (s2*s2 + s3*s3) ||
		s2*s2 == (s1*s1 + s3*s3) ||
		s3*s3 == (s1*s1 + s2*s2)) {
		printf("is a right angled triangle.\n");
	} else {
		printf("is an scalene triangle.\n");
	}
	return 0;
}

