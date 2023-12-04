//Write a program to generate all combinations of 1, 2 and 3 using for loop.

#include<stdio.h>

void main(){
		int i,j,a=1,b=2,c=3,temp;
		
		for(i=0;i<3;i++){
			for(j=0;j<2;j++){
				printf("%d %d %d\n",a,b,c);
				if(j<1){
				temp = c;
				c = b;
				b = temp;
				}
			}
			temp = c;
			c = a;
			a = temp;
		}
}
