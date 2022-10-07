#include<stdio.h>

void main() {
    for (int i = 1; i <= 4; i++) {
        for (int ii = 1; ii <= i; ii++) {
            printf("* ");
        }
        printf("\n");
    }
    
}