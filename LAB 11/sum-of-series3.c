#include<stdio.h>

void main() {
    
    float num, sum, i = 0;
    printf("pls enter number to print series: ");
    scanf("%f", &num);

    while (i < num)
    {
        i++;
        
        sum = sum + (1 / i);

        (i == 1) ? printf("1") : printf("(1 / %f)", i);

        (i < num) ? printf(" + ") : printf(" = ");
    }
    printf("%f", sum);
    
}

