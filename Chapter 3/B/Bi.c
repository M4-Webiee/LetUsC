//B(i). Write a program to find the range of a set of numbers. Range 
//is the difference between the smallest and biggest number in 
//the list.

#include<stdio.h>

void main(){
	int min=9999, max=0, temp,i;
	printf("Number of digits: ");
	scanf("%d",&i);
	
	while(i){
		scanf("%d",&temp);
		if(temp > max){
			max = temp;
		}else if(temp < min ){
			min = temp;
		}
		i--;
	}
	printf("Range of entered numbers: %d",max-min);
}
