/* Exercise 1-12. Write a program that prints its input one word per line.*/

#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
    int c, state = OUT; /* keep track of state to ignore characters before a word*/

    while ((c = getchar()) != EOF){ /* Windows EOF: Ctrl+Z ENTER */
        if ((c == '\n') || (c == '\t') || (c == ' ')){
            if (state == IN){
                state = OUT;
                putchar('\n');
            }
        }
        else if (state == OUT){
            putchar(c);
            state = IN;
        }
        else
            putchar(c);
    }
}