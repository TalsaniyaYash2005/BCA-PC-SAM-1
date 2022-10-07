#include<stdio.h>

void main() {
    for (int i = 1; i <= 5; i++) {
        for (int ii = 1; ii <= i; ii++) {
            printf("%d ", ii);
        }
        printf("\n");
    }
    
}