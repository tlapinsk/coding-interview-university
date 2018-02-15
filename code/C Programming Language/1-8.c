#include <stdio.h>

/* Count newlines, blanks, and tabs */
int main()
{
    int c, n1, b1, t1;

    n1 = 0;
    b1 = 0;
    t1 = 0;
    while ((c = getchar()) != EOF)
    {
        if(c == '\n')
          ++n1;
        else if(c == ' ')
          ++b1;
        else if(c == '\t')
          ++t1;
    }
    printf("Newlines: %d\nBlanks: %d\nTabs: %d\n", n1, b1, t1);
}