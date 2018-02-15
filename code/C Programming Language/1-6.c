#include <stdio.h>

/* Copy input to output */

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        printf("%d ", c != EOF);
        putchar(c);
    }
    printf("\n%d\n", c != EOF);
}