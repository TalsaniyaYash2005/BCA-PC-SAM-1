#include<stdio.h>

void main() {
    int index = 0, max, sum;
    printf("enter max number : ");
    scanf("%d", &max);
    while (index < max) {
        index++;
        if (index % 2 ==0) {
            sum = sum + index;
            printf("%d \n", index);
        }
    }
    printf("sum is %d", sum);
}