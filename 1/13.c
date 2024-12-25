/* Exercise 1-13. Write a program to print a histogram of the lengths of words
in its input. It is easy to draw the histogram with the bars horizontal; a 
vertical orientation is more challenging. */

#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXWORD 10
#define MAXHISTOGRAM 20

main()
{
    int i, j, c, state, cnt, maxcnt, barlen;
    state = OUT;
    cnt = 0;
    int histogram[MAXWORD];

    for (i = 0; i < MAXWORD; i++) {
        histogram[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if ((c == ' ') || (c == '\t') || (c == '\n')) {
            if (state == IN) {
                if (cnt <= MAXWORD)
                    ++histogram[cnt - 1];
                state = OUT;
            }
        }
        else if (state == OUT) {
            state = IN;
            cnt = 1;
        }
        else if (cnt <= MAXWORD)
            ++cnt;
    }

    maxcnt = 0;
    for (i = 0; i < MAXWORD; i++) 
        if (histogram[i] > maxcnt)
            maxcnt = histogram[i];

    for (i = 0; i < MAXWORD; i++) {
        printf("%d: ", i + 1);
        barlen = histogram[i] * MAXHISTOGRAM / maxcnt;
        for (j = 0; j < barlen; ++j)
            putchar('*');    
        putchar('\n');
    }
}