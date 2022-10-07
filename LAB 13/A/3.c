#include<stdio.h>

void main() {
    int index = 1;
    for (int i = 1; i <= 4; i++) {
        for (int ii = 1; ii <= i; ii++) {
            printf("%d ", index);
            index ++;
        }
        printf("\n");
    }
    
}