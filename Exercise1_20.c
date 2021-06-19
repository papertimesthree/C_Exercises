#include <stdio.h>
#define TABWIDTH 10

int main(void) 
{

	int c, count, i, spaces;

	count = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			spaces = TABWIDTH - (count % TABWIDTH);
			for (i = 0; i < spaces; i++) {
				putchar(' ');
				++count;
			}
		}
		else {
			putchar(c);
			++count;
		}
	
	}

	return 0;
}