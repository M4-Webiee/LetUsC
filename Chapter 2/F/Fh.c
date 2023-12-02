#include <stdio.h>

int main() {
	int time;
	printf("enter time take to complete the job:");
	scanf("%d", &time);
	if(time >= 2 && time < 3) {
		printf("worker is highly efficient.\n");
	} else if (time >= 3 && time < 4) {
		printf("worker is ordered to increase speed.\n");
	} else if (time >= 4 && time < 5) {
		printf("worker needs to be given training.\n");
	} else if (time > 5) {
		printf("worker is asked to leave company.\n");
	}
	return 0;
}
