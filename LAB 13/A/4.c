#include<stdio.h>

void main() {
    int index = 0;
    for (int i = 1; i <= 4; i++) {
        for (int ii = 1; ii <= i; ii++) {
            (index == 0) ? (index = 1) : (index = 0);
            printf("%d ", index);
        }
        printf("\n");
    }
    
}