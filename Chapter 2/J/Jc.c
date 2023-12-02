#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	(a > b && a > c)?
	printf("%d is the biggest one.\n", a): (b > a && b > c)? 
	printf("%d is the biggest one.\n", b): printf("%d is the biggest one.\n", c);
	return 0;
}
