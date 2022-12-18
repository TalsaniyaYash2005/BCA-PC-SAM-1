#include<stdio.h>
int maxno(int, int);
void main() {
    int num1, num2;
    printf("enter first number: ");
    scanf("%d", &num1);
    printf("enter second number: ");
    scanf("%d", &num2);

    printf("bigger number is: %d", maxno(num1, num2));
}

int maxno(int a, int b) {
    return (a < b) ? b : a;
}