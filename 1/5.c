/* Exercise 1-5. Modify the temperature conversion program to print the table in 
 * reverse order, that is, from 300 degrees to 0. */

#include <stdio.h>

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = upper;
    printf("Fahrenheit\tCelsius\n");
    while (fahr >= lower) {
        celsius = 5 * (fahr-32) / 9;
        printf("%10d\t%7d\n", fahr, celsius);
        fahr = fahr - step;
    }
}
