#include <stdio.h>
int add(int);
void main()
{
    int n;
    printf("enter n number: ");
    scanf("%d", &n);

    printf("sum is: %d", add(n));
}

int add(int a)
{
    int sum = 0;
    for (int i = 1; i <= a; i++) {
        sum = sum + i;
    }
    return sum;
}