/* Exercise 1-14. Write a program to print a histogram of the frequencies 
of different characters in its input.*/

#include <stdio.h>

#define ASCII_SIZE 128

main()
{
    int c, i, j;
    int characters[ASCII_SIZE];

    for (i = 0; i < ASCII_SIZE; i++)
        characters[i] = 0;

    while((c = getchar()) != EOF)
    {
        ++characters[c];
    }

    for (i = 0; i < ASCII_SIZE; i++) {
        if (isprint(i)) {
            printf("(%c) ", i);
            for (j = 0; j < characters[i]; j++)
                putchar('*');
            printf("\n");
        }
    }

}