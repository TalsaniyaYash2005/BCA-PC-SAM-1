#include <stdio.h>
// 14 + 7 + 4 + 2 + 1 = 28
// 28 can divided by 14  7  4  2  1 and sum of 14  7  4  2  1 is the same number

void main()
{
    int i, num, sum = 0;
    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);
    for(i = 1; i <= num / 2; i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    (sum == num && num > 0) ? printf("%d is PERFECT NUMBER \n", num) : printf("%d is NOT PERFECT NUMBER \n", num);
}