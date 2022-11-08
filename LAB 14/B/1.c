#include <stdio.h>

void main()
{
    int i, space, rows = 4, col = 0;
    int c1 = 1;
    char c2 = 'A';
    for (i = 1; i <= rows; ++i)
    {
        col = 0;
        // first itration 4(rows) - 1 = 4 space
        // seconf itration 4(rows) - 2 = 3 space
        for (space = 1; space <= rows - i; ++space)
        {
            printf("  ");
        }

        // 2 * 1 - 1 in 1st itration
        // 2 * 2 - 1 in second itration
        // because 2 aagad pachad star vadharva na
        while (col != ((2 * i) - 1))
        {
            
            (i % 2 == 0) ? (printf("%c ", c2), c2++) : (printf("%d ", c1), c1++);
            col++;
        }

            printf("\n");
    }
}
