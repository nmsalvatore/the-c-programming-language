#include <stdio.h>
#include <ctype.h>

#define MAXHIST 15      /* maximum length of histogram */
#define MAXCHAR 128     /* maximum different characters */

int main()
{
    int c, i, j;
    int cc[MAXCHAR];

    for (i = 0; i < MAXCHAR; ++i)
        cc[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c < MAXCHAR)
            ++cc[c];
    }

    for (i = 1; i < MAXCHAR; ++i) {
        if (isprint(i) && cc[i] > 0) {
            printf("%c ", i);

            for (j = 1; j < MAXHIST; ++j) {
                if (j <= cc[i])
                    putchar('#');
            }

            putchar('\n');
        }
    }

    return 0;
}
