#include<stdio.h>

int main() {
	int x1, y1, x2, y2, x3, y3;
	scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
	if ((x2-x2)*(y2-y1) == (x2-x1)*(y3-y2)) {
		printf("points lie on the same line.\n");
	} else {
		printf("points are not collinear.\n");
	}
	return 0;
}

