#include<stdio.h>

int main() {
	int x, y;
	scanf("%d%d", &x, &y);
	if (x == 0) {
		if (y == 0) {
			printf("point lie on the origin.\n");
		}
		else {
			printf("point lie on the x axis.\n");
		}
	} else {
		if (x == 0) {
			printf("point lie on the origin.\n");
		}
		else {
			printf("point lie on the y axis.\n");
		}
	}
	return 0;
}
