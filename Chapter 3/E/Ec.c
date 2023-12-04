//Write a program to add first seven terms of the following series using a for loop:

#include<stdio.h>


int fact(int n){
	int i,rs=1;
	for(i=n; i>0; i--){
		rs*=i;
	}
	return rs;
}

void main(){
	int n;
	float i;
	float result=0.0;
	printf("Enter n: ");
	scanf("%d",&n);
	for (i=1; i<=n;i++){
		result += i/fact(i);
	}
	printf("%f",result);
}



