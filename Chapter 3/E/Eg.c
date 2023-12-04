//E(g). Write a program to fill the entire screen with diamond and 
//heart alternatively. The ASCII value for heart is 3 and that of 
//diamond is 4.

#include <stdio.h>

void main(){
	int i=20000;
	char a=3,b=4;
	
	while(i){
		printf("%c%c",a,b);
		i--;
	}
}
