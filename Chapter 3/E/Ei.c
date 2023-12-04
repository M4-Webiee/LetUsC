//E(i). Write a program to produce the following output: 
//	   1 
//	  2 3 
//	 4 5 6 
//	7 8 9 10

#include<stdio.h>
void main(){
	int i,j,k,count=1,limit=1;
	
	for (i = 0; i<=3; i++){
		for (j=i;j<=2;j++){
			printf(" ");
		}
		for(k=0; k<limit;k++){
			printf("%d ",count);
			count++;
		}
		limit++;
		printf("\n");
	}	
}
