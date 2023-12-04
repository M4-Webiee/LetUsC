//B(a). Write a program to calculate overtime pay of 10 employees. 
//Overtime is paid at the rate of Rs. 12.00 per hour for every 
//hour worked above 40 hours. Assume that employees do not 
//work for fractional part of an hour. 

#include<stdio.h>

void main(){
	int time,i,overtime=0;
	printf("Enter Time: ");
	scanf("%d",&time);
	
	if(time>=40)
		for (i=41; i<= time; i++)
			overtime += 12;
	
	printf("Overtime Pay of 10 employees: %d",overtime*10);
}
