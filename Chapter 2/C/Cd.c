#include <stdio.h>

int main() {
	int day = 1, month = 13, year;
	scanf("%d", &year);
	year--;
	int k = year % 100;
	int j = year / 100;
	int dayOfWeek = (day + ((13 * (month + 1)) / 5)
	+ k + (k / 4) + (j / 4) - (2 * j)) % 7;
	if (dayOfWeek < 0) {
		dayOfWeek += 7;
	}
	if(dayOfWeek == 0)
		printf("Saturday \n");
	else if(dayOfWeek == 1)
		printf("Sunday \n");
	else if(dayOfWeek == 2)
		printf("Monday \n");
	else if(dayOfWeek == 3)
		printf("Tuesday \n");
	else if(dayOfWeek == 4)
		printf("Wednesday \n");
	else if(dayOfWeek == 5)
		printf("Thursday \n");
	else
		printf("Friday \n");
	return 0;
}



