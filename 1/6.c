/* Exericise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */

#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar() != EOF)) { /* Windows EOF: Ctrl+Z ENTER */
        printf("Expression value is: %d\n", c);
    }
    printf("EOF reached. The expression value is: %d", c);
}
