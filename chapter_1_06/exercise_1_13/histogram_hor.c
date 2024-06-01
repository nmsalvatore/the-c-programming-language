#include <stdio.h>

#define MAXWORD	15
#define	IN		1
#define OUT 	0

int main()
{
	int c, i, j, len, nw;
	int wl[MAXWORD];

	for (i = 0; i < MAXWORD; ++i)
		wl[i] = 0;

	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\t' || c == '\n') {
			if (nw == IN) {
				nw = OUT;
				++wl[len];
				len = 0;
			}
		} else if (nw == IN) {
			++len;
		} else {
			nw = IN;
			++len;
		}
	
	for (i = 0; i < MAXWORD; ++i) { 
		if (wl[i] > 0) {
			printf("%d ", i);
		
			for (j = 0; j < wl[i]; ++j)
				printf("#");
		
			printf("\n");
		}
	}

	return 0;
}
