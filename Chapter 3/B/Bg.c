//B(g). Write a program to enter the numbers till the user wants and 
//at the end it should display the count of positive, negative and 
//zeros entered.

#include<stdio.h>

void main(){
	int t,num,pv = 0,nv = 0,zr = 0;
	printf("No. of test cases: ");
	scanf("%d",&t);
	while(t){
		printf("Enter number: ");
		scanf("%d",&num);
		
		if(num > 0)
			pv++;
		else if(num < 0)
			nv++;
		else
			zr++;
		
		t--;
	}
	printf("Positive: %d\nNegative: %d\nZero: %d", pv,nv,zr);
}
