#include<stdio.h>

void main() {
    int index, max;

    printf("enter first number : ");
    scanf("%d", &index);
    printf("enter last number : ");
    scanf("%d", &max);
    
    while (index <= max) {
        if (index % 2 == 0 && index % 3 != 0) {
            printf("%d \n", index);
        }
        index++;
    }
}