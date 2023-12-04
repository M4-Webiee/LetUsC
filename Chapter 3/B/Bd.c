//B(d). Write a program to print all the ASCII values and their 
//equivalent characters using a while loop. The ASCII values 
//vary from 0 to 255. 

#include<stdio.h>

void main(){
	int num=0;
	while(num <= 255){
		char value = num;
		printf("%d - %c\n",num,value);
		num++;
	}
}
