#include <stdio.h>

void main() {
    int num;
    printf("enter any number: ");
    scanf("%d", &num);
    printf("revarce order is ");
    while (num != 0)
    {
        printf("%d", num % 10);
        num = num / 10;
    }
    
}