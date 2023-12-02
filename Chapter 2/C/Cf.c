#include<stdio.h>

int main() {
	int ram, shyam, ajay;
	scanf("%d%d%d", &ram, &shyam, &ajay);
	if (ram < shyam) {
		if (ram < ajay) {
			printf("ram is the youngest.");
		} else {
			printf("ajay is the youngest.");
		}
	} else {
		if (shyam < ajay) {
			printf("shyam is the youngest.");
		} else {
			printf("ajay is the youngest.");
		}
	}
	return 0;
}

