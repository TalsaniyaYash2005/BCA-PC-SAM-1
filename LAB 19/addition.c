#include<stdio.h>
int add(int, int);
void main() {
    int a, b;
    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);

    printf("%d + %d = %d", a, b, add(a, b));
}

int add(int a, int b) {
    return a + b;
}