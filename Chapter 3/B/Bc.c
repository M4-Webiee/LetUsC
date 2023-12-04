//B(c). Two numbers are entered through the keyboard. Write a 
//program to find the value of one number raised to the power 
//of another.

#include <stdio.h>

void main(){
	int num,pow,i,result=0;
	
	printf("Enter number: ");
	scanf("%d",&num);
	printf("Raised to the power of: ");
	scanf("%d",&pow);
	result = num;
	if(pow > 1)
		for(pow; pow>1; pow--)
			result *= num;
	
	printf("Value is: %d",result);	
}
