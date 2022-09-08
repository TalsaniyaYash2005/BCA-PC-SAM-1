#include <stdio.h>

void main()
{
    int number;
    printf("enter number : ");
    scanf("%d", &number);

    int i = 0;
    int r, sum = 0;
    
    while (number != 0) {
        r = number % 10;
        sum = sum + r;
        i++;

        number = number / 10;
    }

    printf("sum is %d \n", sum);
}
