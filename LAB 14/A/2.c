#include <stdio.h>

void main()
{
    char ii2 = 'A';
    for (int i = 5; i > 0; i--)
    {
        for (int ii = 1; ii <= i; ii++)
        {
            printf("%c ", ii2);
        }
        ii2++;
       printf("\n");
    }
}