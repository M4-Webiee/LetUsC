//B(b). Write a program to find the factorial value of any number 
//entered through the keyboard.

#include<stdio.h>

void main(){
	int number,fValue=1,i;
	printf("Enter Number: ");
	scanf("%d",&number);
	
	if(number>1)
		for(i=number; i>1; i--)
			fValue *= i;
	
	printf("Factorial Value: %d",fValue);
}
