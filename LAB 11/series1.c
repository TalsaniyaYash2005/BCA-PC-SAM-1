#include<stdio.h>

void main() {
    int num, sum = 0;
    printf("pls enter number to print series: ");
    scanf("%d", &num);
    printf("series is");
    
    for (int i = 1; i <= num; i++) {
        sum = sum + (i * i);
        printf(" %d ", i * i);

        if (i != num) printf("+", i * 1);
        
    }
    
    printf("= %d ", sum);
}

