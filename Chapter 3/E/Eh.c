//E(h). Write a program to print the multiplication table of the 
//number entered by the user. The table should get displayed in 
//the following form. 

#include<stdio.h>

void main(){
	int i,num;
	
	printf("Table of: ");
	scanf("%d",&num);
	
	for(i=1; i<11; i++){
		printf("%d * %2d = %d\n",num,i,num*i);
	}
}
