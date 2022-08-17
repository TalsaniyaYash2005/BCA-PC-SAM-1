#include<stdio.h>

void main()
{
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("nnumber %d is negative", a);
    } else if (a == 0) {
        printf("you enter 0");
    } else {
        printf("nnumber %d is positive", a);

    }
    
    
       
}
