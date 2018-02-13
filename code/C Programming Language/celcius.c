#include <stdio.h>

/* Print fahrenheit-celcius table for fahr = 0, 20, ... , 300 */
main()
{
    float fahr, celcius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%3s %6s", "Fahrenheit", "Celsius");
    while (fahr <= upper)
    {
        celcius = (5.0/9.0) * (fahr - 32);
        printf("%3.0f %14.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}