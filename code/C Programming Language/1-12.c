#include <stdio.h>

/* Print input one word per line */

int main()
{
    int c;
    c = getchar();
    while (c != EOF)
    {
        if(c == ' ')
        {
            putchar('\n');
        }
        else 
        {
            putchar(c);
        }
        c = getchar();
    }
}