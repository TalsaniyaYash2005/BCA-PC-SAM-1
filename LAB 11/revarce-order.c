#include <stdio.h>

void main() {
    int num;
    printf("enter any number: ");
    scanf("%d", &num);
    int sum = 0;
    while (num != 0)
    {
        sum = sum * 10;
        sum = sum + (num % 10);
        num = num / 10;
    }

    
    printf("revarce order is %d", sum);
}