#include <stdio.h>

void main()
{
    for (int i = 5; i > 0; i--)
    {
        char ii2 = 'A';
        for (int ii = 1; ii <= i; ii++, ii2++)
        {
            printf("%c ", ii2);
        }
        printf("\n");
    }
}