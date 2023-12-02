#include<stdio.h>
#include<math.h>

int main() {
	float cx, cy, radius, px, py;
	printf("coordinates of the center of the circle (x, y): ");
	scanf("%f %f", &cx, &cy);
	printf("radius of the circle: ");
	scanf("%f", &radius);
	printf("Enter the coordinates of the point (x, y): ");
	scanf("%f %f", &px, &py);
	float distance = sqrt(pow(px - cx, 2) + pow(py - cy, 2));
	if (distance < radius) {
		printf("The point is inside the circle.\n");
	} else if (distance == radius) {
		printf("The point is on the circle.\n");
	} else {
		printf("The point is outside the circle.\n");
	}
	return 0;
}
