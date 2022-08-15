#include <stdio.h>

void main()
{ 
    int p, r, n;
    printf("enter p: ");
    scanf("%d", &p);
    printf("enter r: ");
    scanf("%d", &r);
    printf("enter n: ");
    scanf("%d", &n);
    printf("interest is %d \n ",(p * r * n) / 100);
}
