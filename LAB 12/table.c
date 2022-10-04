#include<stdio.h>

void main() {
    int n1, n2;
    printf("enter first number: ");
    scanf("%d", &n1);
    printf("enter second number: ");
    scanf("%d", &n2);

    for (int i = 1; i <= 10; i++) {

        for (int i2 = n1; i2 <= n2; i2++) {
            (i2 < n2) ? printf("%d\t", i * i2) : printf("%d\n", i * i2);
        }

    }
    
}