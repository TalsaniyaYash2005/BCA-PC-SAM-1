#include <stdio.h>
// 14 + 7 + 4 + 2 + 1 = 28
// 28 can divided by 14  7  4  2  1 and sum of 14  7  4  2  1 is the same number

void main()
{
    int i, num, sum = 0;
    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);
    printf("factors is");
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf(" %d", i);
            // sum += i;
        }
    }
}