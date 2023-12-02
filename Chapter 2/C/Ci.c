#include<stdio.h>

int main() {
	int l, b, area, perimeter;
	scanf("%d%d", &l, &b);
	area = l*b;
	perimeter = 2*(l+b);
	if (area < perimeter) {
		printf("area is less than perimeter\n");
	} else {
		printf("area is greater than perimeter\n");
	}
	return 0;
}
