#include<stdio.h>

void main()
{
    int a;
    printf("enter first number: ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("nnumber %d is negative", a);
    } else {
        printf("nnumber %d is positive", a);

    }
}
