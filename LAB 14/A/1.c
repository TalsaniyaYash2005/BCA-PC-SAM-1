#include <stdio.h>

void main()
{
    int i, space, rows = 4, k = 0;

    for (i = rows; i > 0; i--)
    {
        // first itration 5(rows) - 1 = 4 space
        // seconf itration 5(rows) - 2 = 3 space
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
        }

        // 2 * 1 - 1 in 1st itration
        // 2 * 2 - 1 in second itration
        // because 2 aagad pachad star vadharva na
        while (k != (2 * i - 1))
        {
            printf("* ");
            ++k;
        }

        printf("\n");
        k = 0;
    }
}
