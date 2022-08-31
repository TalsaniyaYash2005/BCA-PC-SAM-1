#include<stdio.h>

void main()
{
    int a, b, c;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("enter third number: ");
    scanf("%d", &c);
    
    if (a > b && a > c) {
        printf("%d is bigger then %d and %d", a, b, c);
    } else if (b > a && b > a) {
        printf("%d is bigger then %d and %d", b, a, c);
    } else if (c > a && c > b)
    {
        printf("%d is bigger then %d and %d", c, b, a);
    }
    
}
