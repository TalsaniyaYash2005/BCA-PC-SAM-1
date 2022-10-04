#include<stdio.h>

void main() {
    int num, i = 1, temp = 0, sum = 0;
    printf("pls enter number to print series: ");
    scanf("%d", &num);

    while (i <= num)
    {
        printf("%d", i);
        // printf("sum %d\n", sum);
        if (temp == 0) {
            sum = sum - i;
            temp = 1;
            
            if (i != num) {
                printf(" - ");
            }

        } else {
            sum = sum + i;
            temp = 0;
            
            if (i != num) {
                printf(" + ");
            }

        }
        i++;
        
    }
    printf(" = %d", sum);
    
}

