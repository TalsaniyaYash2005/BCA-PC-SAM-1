#include<stdio.h>

void main() {
    int n1, n2, sum = 0;
    printf("enter first number: ");
    scanf("%d", &n1);
    printf("enter second number: ");
    scanf("%d", &n2);

    for (int i = n1; i <= n2; i++) {
        int tempsum = 0;
        printf("(");
        for (int i2 = 1; i2 <= i; i2++) {
            printf("%d", i2);
            tempsum = tempsum + i2;
            (i2 == i) ? : printf(" + ");
        }
        printf(")");
        (!(i < n2)) ? : printf(" + ");
        sum = sum + tempsum; 
    }
    printf(" = %d", sum);

}