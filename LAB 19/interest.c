#include <stdio.h>
int interest(int, int, int);
void main()
{
    int p, r, n;
    printf("enter p number: ");
    scanf("%d", &p);
    printf("enter r number: ");
    scanf("%d", &r);
    printf("enter n number: ");
    scanf("%d", &n);

    printf("interest is %d", interest(p, r, n));
}

int interest(int p, int r, int n)
{
    return (p * r * n) / 100;
}