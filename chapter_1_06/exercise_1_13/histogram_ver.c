#include <stdio.h>

#define IN              1
#define OUT             0
#define MAX_WORD_LENGTH 15

int main()
{
    int c, i, j, state, length, max_occurences;

    int word_lengths[MAX_WORD_LENGTH];

    max_occurences = 0;

    for (i = 0; i < MAX_WORD_LENGTH; ++i) {
        word_lengths[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                state = OUT;
                ++word_lengths[length];

                if (word_lengths[length] > max_occurences)
                    max_occurences =  word_lengths[length];

                length = 0;
            }
        } else if (state == IN) {
            ++length;
        } else {
            state = IN;
            ++length;
        }
    }

    for (i = max_occurences; i > 0; --i) {
        for (j = 1; j < MAX_WORD_LENGTH; ++j) {
            if (i <= word_lengths[j]) {
                printf("%3s", "#");
            } else if (word_lengths[j] > 0) {
                printf("%3s", "");
            }
        }
        printf("\n");
    }

    for (i = 1; i < MAX_WORD_LENGTH; ++i) {
        if (word_lengths[i] > 0)
            printf("%3d", i);
    }
    printf("\n");
}
