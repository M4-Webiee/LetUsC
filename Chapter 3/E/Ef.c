//Write a program to produce the following output:
//	A B C D E F G F E D C B A
//	A B C D E F   F E D C B A
//	A B C D E       E D C B A
//	A B C D           D C B A
//	A B C               C B A
//	A B                   B A
//	A                       A

#include<stdio.h>

int main() {
	char ch = 'A';
	int i, j, s=3;
	for (i = 0; i<7; i++) {
		for (j = 0; j<13; j++) {
			if(j<7-i)
				printf("%c ", ch+j);
			else if (j >= 6+i)
				printf("%c ", 'F'-(j%7));
			else 
				printf("  ");
		}
//		for (j = 0; j<s; j++) {
//			printf(" ");
//		}
//		s += 4;
//		for (j = 6-i; j>=0; j--) {
//			printf("%c ", ch+j);
//		}
		printf("\n");
	}
	return 0;
}
