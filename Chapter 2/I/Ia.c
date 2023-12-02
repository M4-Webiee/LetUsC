#include <stdio.h>

main() {
	int x, min, max;
	scanf("\n%d %d", &max, &x);
	(x > max)? (max = x): (min = x);
}

