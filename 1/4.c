/* Exercise 1-4. Write a program to print the corresponding Celsius to
 * Fahrenheit table. */

#include <stdio.h>

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper) {
        fahr = 9 * celsius / 5.0 + 32;
        printf("%7d\t%10d\n", celsius, fahr);
        celsius = celsius + step;
    }
}
