#include <stdio.h>

/* Print fahrenheit-celsius decremented */
main()
{
    int fahr;

    printf("%3s %6s\n", "Fahrenheit", "Celsius");
    for(fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %14.1f\n", fahr, (5.0/9.0) * (fahr - 32));
}