#include <stdio.h>
char s[27] = "abcdefghijklmnopqrstuvwxyz";

int main() {
	int i, c;
	printf("ÇëÊäÈë±àÂëºóµÄ×Ö·û(a-z)\n");
	while ((c = getchar()) != EOF) {
		
		//putchar(c);
		for (int i = 0; i <= 26; i++) {
			if (c == s[i]) {
				
				//printf("%d", i);
				putchar(s[25-i]);
			}
			else {
				//printf("Error");
			}
		}
	}

	return 0;
}
