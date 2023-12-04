//B(e). Write a program to print out all Armstrong numbers between 
//1 and 500. If sum of cubes of each digit of the number is 
//equal to the number itself, then the number is called an 
//Armstrong number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 
//* 5 ) + ( 3 * 3 * 3 ) 

#include<stdio.h>

void main(){
	int i,number,check;
	
	for(i=1; i<=500; i++){
		number = i;
		check = 0;
		while(number){
			check += (number%10)*(number%10)*(number%10);
			number /= 10;
		}
		if(check == i){
			printf("Armstrong Number %d\n",check);
		}
	}
}
