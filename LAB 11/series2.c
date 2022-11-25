#include<stdio.h>

void main() {
    int num, i = 2, temp = 0, sum = 1;
    printf("pls enter number to print series: ");
    scanf("%d", &num);

    printf("1 - ");
    while (i <= num)
    {
        // printf("sum %d\n", sum);
        printf("%d", i);
        if (temp == 0) {
            sum = sum - i;
            temp = 1;
            
            if (i != num) {
                printf(" + ");
            }

        } else {
            sum = sum + i;
            temp = 0;
            
            if (i != num) {
                printf(" - ");
            }

        }
        i++;
        
    }
    printf(" = %d", sum);
    
}

