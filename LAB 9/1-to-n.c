#include<stdio.h>

void main() {
    int index = 0, max;
    printf("enter max number : ");
    scanf("%d", &max);
    while (index < max) {
        index++;
        printf("%d \n", index);
    }
}