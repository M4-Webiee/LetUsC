#include<stdio.h>

int main() {
	int hardness, tstrength, grade, c1, c2, c3;
	float carbon;
	printf("hardness: ");
	scanf("%d", &hardness);
	printf("carbon content: ");
	scanf("%f", &carbon);
	printf("tensile strength: ");
	scanf("%d", &tstrength);
	c1 = (hardness > 50)? 1: 0;
	c2 = (carbon < 0.7)? 1: 0;
	c3 = (tstrength > 5600)? 1: 0;
	if (c1 && c2 && c3) {
		grade = 10;
	} else if (c1 && c2 && !c3) {
		grade = 9;
	} else if (!c1 && c2 && c3) {
		grade = 8;
	} else if (c1 && !c2 && c3) {
		grade = 7;
	} else if (c1 || c2 || c3) {
		grade = 6;
	} else {
		grade = 5;
	}
	printf("grade = %d\n", grade);
	return 0;
}
