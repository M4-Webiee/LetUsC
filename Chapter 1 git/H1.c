#include <stdio.h>
main(){
	int salary;
	scanf("%d",&salary);
	salary += (0.6)*salary;
	printf("salary = %d",salary);
}
