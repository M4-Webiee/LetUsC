//E(j). Write a program to produce the following output: 
//	    1
//	   1 1
//	  1 2 1
//	 1 3 3 1
//	1 4 6 4 1

#include <stdio.h>

void main() {
    int n = 5;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        
        int value = 1;
        for (int j = 0; j <= i; j++) {
            printf("%d ", value);
            value = value * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

