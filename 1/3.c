/* Exercise 1-3. Modify the temperature conversion program to print a heading
 * above the table. */

#include <stdio.h>

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%10d\t%7d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
