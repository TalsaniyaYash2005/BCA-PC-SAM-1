#include <stdio.h>

void main()
{
    int i, space, rows = 5, k = 0;

    for (i = 1; i <= rows; i++)
    {
        if (i == 1 || i == rows) {
            for (int ii = 0; ii < 5; ii++)
            {

                printf("* ");
            }
            
        } else {
            printf("*");
            for (int ii = 0; ii < 7; ii++)
            {
                printf(" ");
                
            }
            printf("*");
            
        }
        printf("\n");
    }
}
