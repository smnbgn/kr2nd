/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */
# include <stdio.h>


main()
{
    char c;
    long blanks = 0, tabs = 0, newlines = 0;

    while ((c = getchar()) != EOF) { /* Windows EOF: Ctrl+Z ENTER */
        if (c == ' ')
            ++blanks;

        if (c == '\t')
            ++tabs;

        if (c == '\n')
            ++newlines;
    }
    
    printf("\nBlanks: %ld Tabs: %ld, New lines: %ld\n", blanks, tabs, newlines);
}

