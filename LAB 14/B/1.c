#include <stdio.h>

void main()
{
    int i, space, rows = 4, k = 0;
    int ii1 = 1;
    char ii2 = 'A';
    for (i = 1; i <= rows; ++i)
    {
        // first itration 4(rows) - 1 = 4 space
        // seconf itration 4(rows) - 2 = 3 space
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
        }

        if (i % 2 == 0)
        {

            // 2 * 1 - 1 in 1st itration
            // 2 * 2 - 1 in second itration
            // because 2 aagad pachad star vadharva na
            while (k != (2 * i - 1))
            {
                printf("%c ", ii2);
                ii2++;
                k++;
            }
        }
        else
        {

            // 2 * 1 - 1 in 1st itration
            // 2 * 2 - 1 in second itration
            // because 2 aagad pachad star vadharva na
            while (k != (2 * i - 1))
            {
                printf("%d ", ii1);
                ii1++;
                k++;
            }
        }

        printf("\n");
        k = 0;
    }
}
