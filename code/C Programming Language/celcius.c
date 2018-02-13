#include <stdio.h>

/* Print fahrenheit-celsius table for fahr = 0, 20, ... , 300 */
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%3s %6s", "Fahrenheit", "Celsius");
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3.0f %14.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}