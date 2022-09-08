#include<stdio.h>

void main() {
    int index = 0, max, sum = 0;
    printf("enter last number : ");
    scanf("%d", &max);
    while (index < max) {
        index++;
        sum = sum + index;
    }
       printf("%d \n", sum);
}