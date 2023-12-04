//Write a program to fill the entire screen with a smiling face. The smiling face has an ASCII value 1.

#include<stdio.h>

void main(){
	int i,a=1;
	i=20000;
	while(i){
		printf("%c",a);
		i--;
	}
}
