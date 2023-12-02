#include <stdio.h>

int main() {
	char ch;
	printf("enter character:");
	scanf("%c", &ch);
	((ch > -1 && ch < 48) || (ch > 57 && ch < 65) ||(ch > 90 && ch < 97) || (ch > 122 && ch < 128))? 
	printf("special symbol\n"): (ch > 96 && ch < 123)? printf("lower case alphabet\n"): printf("some other character\n");
	return 0;
}
