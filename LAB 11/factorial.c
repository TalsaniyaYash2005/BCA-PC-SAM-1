#include <stdio.h>


void main()
{
    int i, num, sum = 1;
    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);
    printf("factorial is ");
    for(i = 1; i <= num; i++)
    {
       sum = sum * i;
    }
    printf("%d", sum);
}
