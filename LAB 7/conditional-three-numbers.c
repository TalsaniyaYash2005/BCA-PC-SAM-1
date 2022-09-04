#include<stdio.h>

void main() {
    int a, b, c;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);
    printf("enter third number: ");
    scanf("%d", &c);

    (a > b && a > c) ? (printf("%d is biggest", a)) : (b > a && b > c) ? (printf("%d is biggest", b)) : (printf("%d is biggest", c));

}