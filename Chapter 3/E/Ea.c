//E(a). Write a program to print all prime numbers from 1 to 300. (Hint: Use nested loops, break and continue)

#include<stdio.h>

void main(){
	int i,j;
	int count = -1;
	printf("2\n");
	for(i=3; i<=300; i+=2){
		count = -1;
		for(j=1;j<(i/2)+1;j+=2){
			if(i%j == 0)
				count++;
		}
		if(count<1){
			printf("%d\n",i);
		}
	}
}
