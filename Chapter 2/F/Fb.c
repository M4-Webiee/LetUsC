#include <stdio.h>
int main() {
	char ch;
	scanf("%c", &ch);
	if((ch > -1 && ch < 48) || (ch > 57 && ch < 65) ||(ch > 90 && ch < 97) || (ch > 122 && ch < 128)) {
		printf("%c is a special symbol!", ch);
	} else if (ch < 58) {
		printf("%c is a digit!", ch);
	} else if (ch < 91) {
		printf("%c is a capital letter!", ch);
	} else if (ch < 123) {
		printf("%c is a small letter!", ch);
	}
	return 0;
}
