#include <stdio.h>

void main()
{
    for (int i = 5; i > 0; i--)
    {
        for (int ii = 1; ii <= i; ii++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}