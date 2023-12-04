//B(h). Write a program to find the octal equivalent of the entered number. 

#include<stdio.h>

void main(){
	int number,octal=0,y=1;
	printf("Enter number: ");
	scanf("%d",&number);
	while(number){
		if(number>7){
			octal += ((number%8)*y);
			y *= 10;
			number = number/8;
		}else{
			octal += (number*y);
			number=0;
		}
	}
	printf("Octal form: %d",octal);
}
