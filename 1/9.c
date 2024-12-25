/* Exercise 1-9. Write a program to copy its input to its output, replacing
each string of one or more blanks by a single blank. */
#include <stdio.h>

int main()
{
    char c, last = 'a';
    while ((c = getchar()) != EOF) { /* WINDOWS EOF: Ctrl+Z ENTER */
	if ((c == ' ') && (last == c))
	    ;
	else 
	    putchar(c);

	last = c;
    }
}
