#include<stdio.h>

void main() {
    int index = 0, max;
    printf("enter max number : ");
    scanf("%d", &max);
    while (index < max) {
        index++;
        if (index % 2 !=0) {
            printf("%d \n", index);
        }
    }
}