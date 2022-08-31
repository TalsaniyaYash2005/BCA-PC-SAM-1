#include<stdio.h>

void main()
{
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("%d is bigger then %d", a, b);
    } else {
        printf("%d is bigger then %d", b, a);

    }
    
}
