//E(e). According to a study, the approximate level of intelligence of 
//a person can be calculated using the following formula:
//	i = 2 + ( y + 0.5 x ) 
//Write a program, which will produce a table of values of i, y
//and x, where y varies from 1 to 6, and, for each value of y, x
//varies from 5.5 to 12.5 in steps of 0.5.

#include<stdio.h>

void main(){
	int i, y, x;
	float j;
	printf(" i | y | x \n");
	for(i=1;i<=6;i++){
		for(j=0.5; j<=12.5; j+=0.5){
			printf(" %d | %d | %.2f \n",i,i,j);
		}
	}
}
